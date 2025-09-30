from cocotb.queue import Queue
from utils.packet_lib.ethernet_packet import EthernetPacket
from utils.packet_lib.ether_type import EtherType
from utils.tb_components.generic_checker import GenericChecker

class RxMacChecker(GenericChecker):
  
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
    if (expected_packet != actual_packet):
      msg = f"""Expected packet doesn't match actual packet: "
        Expected Ethernet Packet = {expected_packet}
        Actual Ethernet Packet = {actual_packet}"""
     
      if self.fatal:
        print(actual_packet.crc)
        print(expected_packet.crc)
        raise RuntimeError(msg)
      else:
        print(f"[ERROR] {msg}")
        
  async def get_and_check_eth_packets(self, expected_queue, actual_eth_packet):
    if (not expected_queue.empty()):
      expected_eth_packet = await expected_queue.get()
      self.check_ethernet_packet(expected_eth_packet, actual_eth_packet)
    else: 
      print("queue size", expected_queue.qsize())
      msg = (f"No corresponding expected output for "
      f"actual output {actual_eth_packet}")
      if self.fatal:
        raise RuntimeError(msg)
      else:
        print(f"[WARNING] {msg}")
        
        
  async def check(self, expected_queue, actual_queue):
    dst_mac = bytes()
    src_mac = bytes()
    eth_type = bytes()
    payload = bytes()
    last_payload_or_crc = False
    invalidate_packet = False
    
    print("Expected Q: ", expected_queue.qsize())
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
        
      invalidate_packet = invalidate_packet or actual_out.invalid_frame_o
      
      if (actual_out.invalid_frame_o):
        print("Invalid!!!")
      if (last_payload_or_crc and not actual_out.is_payload_or_crc_o):
        print("invalidate_packet", invalidate_packet)
        if (not invalidate_packet): 
          actual_crc = int.from_bytes(payload[-EthernetPacket.CRC_LEN:], 'big')
          actual_eth_packet = EthernetPacket(dst_mac, src_mac, EtherType.from_bytes(eth_type), payload[:-EthernetPacket.CRC_LEN], actual_crc)
          
          await self.get_and_check_eth_packets(expected_queue, actual_eth_packet)
          
        dst_mac = bytes()
        src_mac = bytes()
        eth_type = bytes()
        payload = bytes()
        invalidate_packet = False
      
      last_payload_or_crc = actual_out.is_payload_or_crc_o
    
    actual_crc = int.from_bytes(payload[-EthernetPacket.CRC_LEN:], 'big')
    actual_eth_packet = EthernetPacket(dst_mac, src_mac, EtherType.from_bytes(eth_type), payload[:-EthernetPacket.CRC_LEN], actual_crc)
    print(actual_out)
    print("invalidate_packet", invalidate_packet)
    if (not invalidate_packet): 
      await self.get_and_check_eth_packets(expected_queue, actual_eth_packet)
    await self.check_remaining(expected_queue, queue_name="Expected Queue")
