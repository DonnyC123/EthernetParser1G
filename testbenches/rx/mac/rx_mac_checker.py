from cocotb.queue import Queue
from testbenches.utils.packet_lib.ethernet_packet import EthernetPacket
from testbenches.utils.packet_lib.ether_type import EtherType

class RxMacChecker():
  def __init__(self, fatal=True):
    self.fatal = fatal
  
  
  def check_parser_flags(self, actual_out):
    if (1 < actual_out.is_preamble_or_sfd_o 
          + actual_out.is_dst_mac_o 
          + actual_out.is_src_mac_o 
          + actual_out.is_ether_type_o 
          + actual_out.is_payload_or_crc_o):
      
      msg = f"""Multiple sections in parser raised: "
        actual_out.is_preamble_or_sfd_o = {actual_out.is_preamble_or_sfd_o}
        actual_out.is_dst_mac_o = {actual_out.is_dst_mac_o}
        actual_out.is_src_mac_o = {actual_out.is_src_mac_o}
        actual_out.is_ether_type_o = {actual_out.is_ether_type_o}
        actual_out.is_payload_or_crc_o = {actual_out.is_payload_or_crc_o}"""
      
      if self.fatal:
        raise RuntimeError(msg)
      else:
        print(f"[ERROR] {msg}")
        
        
  def check_ethernet_packet(self, expected_packet, actual_packet):
    print(actual_packet)
    if (expected_packet != actual_packet):
      msg = f"""Expected packet doesn't match actual packet: "
        Expected Ethernet Packet = {expected_packet}
        Actual Ethernet Packet = {actual_packet}"""
      
      if self.fatal:
        raise RuntimeError(msg)
      else:
        print(f"[ERROR] {msg}")
        
        
  async def check(self, expected_queue, actual_queue):
    dst_mac = bytes()
    src_mac = bytes()
    eth_type = bytes()
    payload = bytes()
    
    last_payload_or_crc = False
    
    while(not actual_queue.empty()):
      actual_out = await actual_queue.get() 
      self.check_parser_flags(actual_out)
      
      if actual_out.is_dst_mac_o:
        dst_mac += actual_out.rx_data_o.buff
      if actual_out.is_src_mac_o:
        src_mac += actual_out.rx_data_o.buff
      if actual_out.is_ether_type_o:
        eth_type += actual_out.rx_data_o.buff
      if actual_out.is_payload_or_crc_o:
        payload += actual_out.rx_data_o.buff
      
      if (last_payload_or_crc and not actual_out.is_payload_or_crc_o):
        actual_eth_packet = EthernetPacket(dst_mac, src_mac, EtherType.from_bytes(eth_type), payload)
        expected_eth_packet = await expected_queue.get()
        self.check_ethernet_packet(expected_eth_packet, actual_eth_packet)
        
        dst_mac = bytes()
        src_mac = bytes()
        eth_type = bytes()
        payload = bytes()
      
      last_payload_or_crc = actual_out.is_payload_or_crc_o
      
    actual_eth_packet = EthernetPacket(dst_mac, src_mac, EtherType.from_bytes(eth_type), payload)
    expected_eth_packet = await expected_queue.get()
    self.check_ethernet_packet(expected_eth_packet, actual_eth_packet)