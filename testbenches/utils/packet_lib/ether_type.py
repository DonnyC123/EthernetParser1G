from enum import IntEnum

class EtherType(IntEnum):
  IPV4 = 0x0800
  ARP = 0x0806
  IPV6 = 0x86DD
  VLAN = 0x8100
  MPLS = 0x8847
  MPLS_MULTICAST = 0x8848

  
  @classmethod
  def from_bytes(cls, b: bytes) -> 'EtherType':
    if len(b) != 2:
        raise ValueError("Input must be 2 bytes long")
        
      
    integer_value = int.from_bytes(b, 'big')
    return cls(integer_value)