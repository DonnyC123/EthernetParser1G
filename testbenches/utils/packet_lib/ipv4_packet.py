from scapy.all import IP, TCP, sr1, raw, Ether
ip_packet = IP(src="192.168.1.100", dst="192.168.1.1", ttl=64)
print("--- Packet Summary ---")
ip_packet.show()

ether_packet = Ether(dst="b4:96:91:57:4b:54")
ether_packet.show()

print(raw(Ether()))

print(raw(ip_packet))

# class Ipv4Packet:
#   def __init__(self, ):
#     # self.version
#     self.IHL
#     self.DSCP
#     self.ECN
#     # self.total_len
    