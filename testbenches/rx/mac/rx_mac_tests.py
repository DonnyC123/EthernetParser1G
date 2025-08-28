import cocotb
from cocotb.triggers import Timer
import sys
import os

# Get the absolute path to the project's root directory
project_root = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
# Add the project's root to the Python path
sys.path.insert(0, project_root)

from utils.tb_common import initialize_tb
from utils.tb_components.generic_ddr_driver import GenericDdrDriver
from utils.packet_lib.ethernet_packet import EthernetPacket
from utils.packet_lib.ether_type import EtherType
from rx.mac.rx_mac_input_interface import RxMacInputInterface
from rx.mac.rx_mac_sequence import RxMacSequence

@cocotb.test()
async def sanity_test(dut):
  
  await initialize_tb(dut, clk_period_ns=10)
   
  rx_mac_driver = GenericDdrDriver[RxMacInputInterface](dut=dut)
  rx_mac_sequence = RxMacSequence[RxMacInputInterface](driver=rx_mac_driver)
  
  frame = EthernetPacket(
    dst_mac="aabbccddeeff",
    src_mac="112233445566", 
    ethertype=EtherType.IPV4,
    payload=b"Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet!"
  )
  
  await rx_mac_sequence.add_ethernet_frame(frame)
  await Timer(1000, units="ns")
  
  dut._log.info("Extended test completed")
    
  
  
