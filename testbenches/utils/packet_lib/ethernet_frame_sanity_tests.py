from utils.packet_lib.ethernet_frame import EthernetFrame
from utils.packet_lib.ether_type import EtherType

if __name__ == "__main__":
  frame = EthernetFrame(
    dst_mac="aabbccddeeff",
    src_mac="112233445566", 
    ethertype=EtherType.IPV4,
    payload=b"Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet! Hello Ethernet! Goodbye Ethernet!"
  )
  
  print(frame)
  print(f"\nPacked frame: {frame.pack().hex()}")
  
  packed = frame.pack()
  unpacked = EthernetFrame.unpack(packed)
  print(f"\nUnpacked frame matches: {frame.dst_mac_str == unpacked.dst_mac_str}")
  
  print(f"Payload Data: {unpacked.payload_str}")