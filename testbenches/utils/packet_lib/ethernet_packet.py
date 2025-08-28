import struct
import zlib

from testbenches.utils.packet_lib.ethernet_frame import EthernetFrame
from testbenches.utils.packet_lib.ether_type import EtherType

class EthernetPacket(EthernetFrame):
  
  def __init__(self,
    dst_mac: str = "000000000000", 
    src_mac: str = "ffffffffffff",
    ethertype: EtherType = EtherType.IPV4,
    payload: bytes = b""
    ):
    super().__init__(dst_mac, src_mac, ethertype, payload)
    
  PREAMBLE = b'\xaa' * 7
  SFD = b'\xab'
  
  def pack(self, pad: bool = True) -> bytes:
    frame = super().pack(pad)
    packet = self.PREAMBLE + self.SFD + frame
    return packet
  
  @classmethod
  def unpack(cls, data: bytes, verify_crc: bool = True) -> 'EthernetPacket':
    frame = super().unpack(data[8:], verify_crc)
    
    packet = cls(
      dst_mac=frame.dst_mac,
      src_mac=frame.src_mac, 
      ethertype=frame.ethertype,
      payload=frame.payload
    )
    packet.crc = frame.crc
    return packet
    