import random

from utils.tb_components.generic_sequence import GenericSequence
from utils.packet_lib.ethernet_frame import EthernetFrame

from rx.mac.rx_mac_input_interface import RxMacInputInterface

class RxMacSequence(GenericSequence[RxMacInputInterface]):
  MIN_FRAME_GAP = 96//4
  
  def __init__(self, driver, *subscribers):
    super().__init__(driver, subscribers)
  
  async def add_ethernet_corrupted_packet(self, ethernet_frame : EthernetFrame, additional_frame_gap : int = 0):
    await self.create_ethernet_driver_transactions(ethernet_frame, additional_frame_gap)
              
  async def add_ethernet_packet(self, ethernet_frame : EthernetFrame, additional_frame_gap : int = 0):
    await self.notify_subscribers(ethernet_frame)
    await self.create_ethernet_driver_transactions(ethernet_frame, additional_frame_gap)
  
  async def create_ethernet_driver_transactions(self, ethernet_frame : EthernetFrame, additional_frame_gap : int = 0):
    for byte in ethernet_frame.pack():
      rising_data = byte & 0xF
      falling_data = ((byte >> 4) & 0xF)
      
      await self.add_transaction((
        RxMacInputInterface.with_valid(rgmii_rx_data_i=rising_data, valid=1),
        RxMacInputInterface.with_error(rgmii_rx_data_i=falling_data, error=0)
      ))
    await self.add_frame_gap(self.MIN_FRAME_GAP + additional_frame_gap)
    
  async def add_transaction(self, transaction: RxMacInputInterface):
    await self.driver.send(transaction)
    
  async def add_frame_gap(self, packet_gap: int):
    for _ in range(packet_gap):
      await self.add_transaction((
        RxMacInputInterface.with_valid(rgmii_rx_data_i=random.randint(0, 15), valid=0),
        RxMacInputInterface.with_error(rgmii_rx_data_i=random.randint(0, 15), error=random.randint(0, 1))
      ))
      
