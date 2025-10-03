from cocotb.queue import Queue
from hash_controller.hash_notification_types import HashTransactionTypes
from hash_controller.hash_controller_output_interface import HashControllerOutputInterface

class HashControllerModel():
  def __init__ (self):
    self.expected_queue = Queue()
    self.hash_set = set()
    
  async def notify(self, notification):
    if notification[0] == HashTransactionTypes.INSERT:

      self.hash_insert(notification[1])
    elif notification[0] == HashTransactionTypes.LOOKUP:
      await self.hash_lookup(notification[1])
    else:
      msg = f"Notification Transaction Type {notification[0]} invalid"
      raise RuntimeError(msg)  

  def hash_insert(self, val):
    self.hash_set.add(val)
    
  async def hash_lookup(self, val):
    await self.expected_queue.put(HashControllerOutputInterface(val in self.hash_set, True))
    