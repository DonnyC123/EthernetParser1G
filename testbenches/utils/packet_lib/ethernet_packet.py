from utils.packet_lib.ethernet_frame import EthernetFrame
from utils.packet_lib.ether_type import EtherType

class EthernetPacket(EthernetFrame):
  PREAMBLE_LEN = 7
  SFD_LEN = 1
  PREAMBLE_SFD_LEN = PREAMBLE_LEN + SFD_LEN
  
  PREAMBLE = b'\xaa' * PREAMBLE_LEN
  SFD = b'\xab'
  
  def pack(self, pad: bool = True) -> bytes:
    frame = super().pack(pad)
    packet = self.PREAMBLE + self.SFD + frame
    return packet
  
  @classmethod
  def unpack(cls, data: bytes, verify_crc: bool = True) -> 'EthernetPacket':
    frame = super().unpack(data[cls.PREAMBLE_SFD_LEN:], verify_crc)
    
    packet = cls(
      dst_mac=frame.dst_mac,
      src_mac=frame.src_mac, 
      ethertype=frame.ethertype,
      payload=frame.payload
    )
    packet.crc = frame.crc
    return packet