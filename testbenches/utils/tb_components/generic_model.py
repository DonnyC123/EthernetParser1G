import cocotb
from cocotb.queue import Queue

class GenericModel():
  def __init__ (self):
    self.expected_queue = Queue()

  def notify(self, notification):
    self.process_notification(notification)

  def process_notification(self, notification):
    self.expected_queue.put(notification)
    
    
  
  