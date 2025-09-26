from cocotb.queue import Queue

class RxMacChecker():
  def __init__(self):
    pass
  
  def check(self, expected_queue, actual_queue):
    print("HERE!!!")
    
    while(not actual_queue.empty()):
      print(actual_queue.get())
      print("HERE!!!")
    
      