import cocotb
import sys
import os

project_root = os.path.abspath(os.path.join(os.path.dirname(__file__), '..'))
sys.path.insert(0, project_root)

from utils.tb_common import initialize_tb
from utils.packet_lib.ethernet_packet import EthernetPacket
from utils.packet_lib.ether_type import EtherType

from mac.rx_mac_test_base import RxMacTestBase

@cocotb.test()
async def sanity_test(dut):
  await initialize_tb(dut, clk_period_ns=10)
  rx_mac_test_base = RxMacTestBase(dut)
    
  ethernet_packet = EthernetPacket(
    dst_mac="aabbccddeeff",
    src_mac="112233445566", 
    ethertype=EtherType.IPV4,
    payload=b"Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet!"
  )
  

  await rx_mac_test_base.sequence.add_ethernet_packet(ethernet_packet)
  await rx_mac_test_base.wait_for_driver_done()  
  await rx_mac_test_base.scoreboard.check()
  
  
@cocotb.test()
async def one_crc_messedup_packets_test(dut):
  await initialize_tb(dut, clk_period_ns=10)
  
  rx_mac_test_base = RxMacTestBase(dut)

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
    payload=b"Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet!"
  )

  await rx_mac_test_base.sequence.add_ethernet_packet(ethernet_packet)
  await rx_mac_test_base.sequence.add_ethernet_packet(ethernet_packet2)
  
  # ethernet_packet.crc = 10
  # await rx_mac_test_base.sequence.add_ethernet_corrupted_packet(ethernet_packet)
  # await rx_mac_test_base.sequence.add_ethernet_packet(ethernet_packet2)
  
  await rx_mac_test_base.wait_for_driver_done()  
  await rx_mac_test_base.scoreboard.check()
