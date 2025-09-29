import cocotb
from cocotb.triggers import Timer, RisingEdge
import sys
import os

# Get the absolute path to the project's root directory
project_root = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..'))
# Add the project's root to the Python path
sys.path.insert(0, project_root)

from cocotb.utils import get_sim_time
from utils.tb_common import initialize_tb
from utils.tb_components.generic_ddr_valid_driver import GenericDdrValidDriver
from utils.tb_components.generic_data_valid_monitor import GenericDataValidMonitor
from utils.tb_components.generic_scoreboard import GenericScoreboard
from utils.packet_lib.ethernet_packet import EthernetPacket
from utils.packet_lib.ether_type import EtherType

from rx.mac.rx_mac_input_interface import RxMacInputInterface 
from rx.mac.rx_mac_output_interface import RxMacOutputInterface 
from rx.mac.rx_mac_sequence import RxMacSequence
from rx.mac.rx_mac_checker import RxMacChecker

@cocotb.test()
async def sanity_test(dut):
  
  await initialize_tb(dut, clk_period_ns=10)
  
  rx_mac_driver = GenericDdrValidDriver[RxMacInputInterface](dut=dut, input_interface=RxMacInputInterface)
  rx_mac_sequence = RxMacSequence[RxMacInputInterface](driver=rx_mac_driver)
  rx_mac_monitor = GenericDataValidMonitor[RxMacOutputInterface](dut=dut, output_interface=RxMacOutputInterface)
  rx_mac_scoreboard = GenericScoreboard(rx_mac_monitor, checker=RxMacChecker())
  
  ethernet_packet = EthernetPacket(
    dst_mac="aabbccddeeff",
    src_mac="112233445566", 
    ethertype=EtherType.IPV4,
    payload=b"Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet!"
  )

  rx_mac_sequence.add_subscriber(rx_mac_scoreboard.model)
  await rx_mac_sequence.add_ethernet_packet(ethernet_packet)
  
  while await rx_mac_driver.busy():
    await RisingEdge(dut.clk)
  
  await Timer(1000, units="ns")
  sim_time_ns = get_sim_time(units="ns")
  await rx_mac_scoreboard.check()
  dut._log.info(f"Extended test completed at simulation time {sim_time_ns} ns")
  
  
@cocotb.test()
async def three_packets_test(dut):
  await initialize_tb(dut, clk_period_ns=10)
  
  rx_mac_driver = GenericDdrValidDriver[RxMacInputInterface](dut=dut, input_interface=RxMacInputInterface)
  rx_mac_sequence = RxMacSequence[RxMacInputInterface](driver=rx_mac_driver)
  rx_mac_monitor = GenericDataValidMonitor[RxMacOutputInterface](dut=dut, output_interface=RxMacOutputInterface)
  rx_mac_scoreboard = GenericScoreboard(rx_mac_monitor, checker=RxMacChecker())
  
  ethernet_packet = EthernetPacket(
    dst_mac="aabbccddeeff",
    src_mac="112233445566", 
    ethertype=EtherType.IPV4,
    payload=b"Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet!"
  )
  
  ethernet_packet2 = EthernetPacket(
    dst_mac="aabbccddeeff",
    src_mac="112233445566", 
    ethertype=EtherType.IPV4,
    payload=b"Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet! Hello Ethernet!"
  )
    
  rx_mac_sequence.add_subscriber(rx_mac_scoreboard)
  await rx_mac_sequence.add_ethernet_packet(ethernet_packet)
  
  await rx_mac_sequence.add_ethernet_packet(ethernet_packet2)
  
  print(ethernet_packet.pack()[-4:])
  ethernet_packet.crc = 33
  
  print(ethernet_packet.pack()[-4:])
  await rx_mac_sequence.add_ethernet_packet(ethernet_packet)
  
  while await rx_mac_driver.busy():
    await RisingEdge(dut.clk)
  
  await Timer(1000, units="ns")
  sim_time_ns = get_sim_time(units="ns")
  await rx_mac_scoreboard.check()
  dut._log.info(f"Extended test completed at simulation time {sim_time_ns} ns")

