import struct
import zlib

from utils.packet_lib.ether_type import EtherType

class EthernetFrame:
  SCR_MAC_LEN = 6
  DST_MAC_LEN = 6
  ETH_TYPE_LEN = 2
  CRC_LEN = 4
  
  MIN_LEN = 46
  
  def __init__(self,
    dst_mac: str = "000000000000",
    src_mac: str = "ffffffffffff", 
    ethertype: EtherType = EtherType.IPV4,
    payload: bytes = b"",  
    crc: int = None 
  ):
    
    self.dst_mac = self._parse_mac(dst_mac)
    self.src_mac = self._parse_mac(src_mac)
    self.ethertype = ethertype 
    self.payload = payload
    self.crc = crc
    
  def _parse_mac(self, mac_str: str) -> bytes:
    if isinstance(mac_str, bytes) and len(mac_str) == 6:
      return mac_str
    
    mac_clean = mac_str.replace(":", "").replace("-", "").replace(".", "")
    
    if len(mac_clean) != 12:
      raise ValueError(f"Invalid MAC address: {mac_str}")
    
    return bytes.fromhex(mac_clean)
  
  def _mac_to_string(self, mac_bytes: bytes) -> str:
    return ":".join(f"{b:02x}" for b in mac_bytes)
  
  @property
  def dst_mac_str(self) -> str:
    return self._mac_to_string(self.dst_mac)
  
  @property 
  def src_mac_str(self) -> str:
    return self._mac_to_string(self.src_mac)
  
  @property 
  def payload_str(self) -> str:
    try:
      text = self.payload.rstrip(b'\x00').decode('utf-8')
      return text
    except UnicodeDecodeError:
      return self.payload.hex()
  
  @property
  def ethertype_name(self) -> str:
    try:
      return EtherType(self.ethertype).name
    except ValueError:
      return f"Unknown (0x{self.ethertype:04x})"
  
  def calculate_crc(self) -> int:
    frame_without_crc = self.dst_mac + self.src_mac + struct.pack("!H", self.ethertype) + self.payload
    return zlib.crc32(frame_without_crc) & 0xffffffff
  
  def pack(self, pad: bool = True) -> bytes:
    payload = self.payload
    if pad and len(payload) < self.MIN_LEN:
      payload = payload + b'\x00' * (self.MIN_LEN - len(payload))
    
    frame_without_crc = self.dst_mac + self.src_mac + struct.pack("!H", self.ethertype) + payload

    if self.crc is None:
      self.crc = zlib.crc32(frame_without_crc)
    
    frame = frame_without_crc + struct.pack("<I", self.crc)
    return frame
  
  @classmethod
  def unpack(cls, data: bytes) -> 'EthernetFrame':
    dst_mac = data[0:cls.DST_MAC_LEN]
    src_mac = data[cls.DST_MAC_LEN :+ cls.DST_MAC_LEN] 
    ethertype = struct.unpack("!H", data[cls.DST_MAC_LEN + cls.DST_MAC_LEN :+ cls.ETH_TYPE_LEN])[0]
    
    payload = data[cls.DST_MAC_LEN + cls.DST_MAC_LEN + cls.ETH_TYPE_LEN :cls.CRC_LEN]
    received_crc = struct.unpack("!I", data[-cls.CRC_LEN:])[0]
    
    frame_without_fcs = data[:-cls.CRC_LEN]
    calculated_crc = zlib.crc32(frame_without_fcs) & 0xffffffff
    
    if received_crc != calculated_crc:
      raise ValueError(
        f"CRC mismatch: received 0x{received_crc:08X}, "
        f"calculated 0x{calculated_crc:08X}"
      )
      
    frame = cls(dst_mac=dst_mac, src_mac=src_mac, ethertype=ethertype, payload=payload)
    frame.crc = received_crc
    return frame
  
  def __str__(self) -> str:
    return (f"Ethernet Frame:\n"
            f"  Dst MAC: {self.dst_mac_str}\n"  
            f"  Src MAC: {self.src_mac_str}\n"
            f"  EtherType: {self.ethertype_name} (0x{self.ethertype:04x})\n"
            f"  Payload Length: {len(self.payload)} bytes")
  
  def __repr__(self) -> str:
    return f"EthernetFrame(dst='{self.dst_mac_str}', src='{self.src_mac_str}', type=0x{self.ethertype:04x})"

  def __eq__(self, other):
    if not isinstance(other, self.__class__):
        return NotImplemented

    return (self.dst_mac == other.dst_mac and
            self.src_mac == other.src_mac and
            self.ethertype == other.ethertype and
            self.payload == other.payload)