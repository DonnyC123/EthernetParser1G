# from enum import Enum
# from cocotb.queue import Queue

# from utils.tb_components.generic_monitor import GenericMonitor
# from rx.mac.rx_mac_output_interface import RxMacOutputInferface
# from utils.packet_lib.ethernet_frame import EthernetFrame


# class RxMacMonitor():
#   class AppendPosition(Enum):
#     UPPERNIBBLE = 0
#     LOWERNIBBLE = 1
  
#   def __init__(self):
#     self.generic_monitor = GenericMonitor(RxMacOutputInferface)
#     self.packed_transaction_queue: Queue[bytes] = Queue()
    
#     self.partial_payload : bytearray = bytearray()
#     self.last_valid : bool = False
#     self.error_payload : bool = False
#     self.append_position : RxMacMonitor.AppendPosition = RxMacMonitor.AppendPosition.UPPERNIBBLE
    
#   async def monitor_loop(self):
#     while True:
#       output_transaction = await self.generic_monitor.transaction_queue.get()
      
#       if (output_transaction.rgmii_data_valid_o): 
#         self.error_payload = self.error_payload and output_transaction.invalid_frame_o
#         self.append_nibble(output_transaction.rgmii_data_o)
        
#       else: 
#         if (self.last_valid and not self.error_payload):
#           await self.packed_transaction_queue.put(bytes(self.partial_payload))
        
#         self.partial_payload = bytearray()
#         self.error_payload = False 
        
#       self.last_valid = output_transaction.rgmii_data_valid_o
  
#   def append_nibble(self, data):
#     if (self.append_position == RxMacMonitor.AppendPosition.UPPERNIBBLE): 
#       self.append_position = RxMacMonitor.AppendPosition.LOWERNIBBLE
#       self.partial_payload.append(data << 4)
#     else: 
#       self.append_position = RxMacMonitor.AppendPosition.UPPERNIBBLE
#       self.partial_payload[-1] = self.partial_payload[-1] | data