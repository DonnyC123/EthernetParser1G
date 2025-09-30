class GenericChecker():
  def __init__(self, fatal=True):
    self.fatal = fatal
    
  def check_len(self, expected_queue, actual_queue):
    if len(expected_queue) != len(actual_queue):
      msg = (f"Mismatch in queue lengths: "
        f"model={len(expected_queue)}, "
        f"monitor={len(actual_queue)}")
      if self.fatal:
        raise RuntimeError(msg)
      else:
        print(f"[WARNING] {msg}")
        
  async def check_output(self, expected_queue, actual_queue):
    while (not expected_queue.empty()) and (not actual_queue.empty()):
      monitor_out = await actual_queue.get()
      model_out = await expected_queue.get()
      
      if monitor_out != model_out:
        msg = f""""Mismatch in model and monitor outputs:
          model output={model_out}, 
          monitor output={monitor_out}"""
        if self.fatal:
          raise RuntimeError(msg)
        else:
          print(f"[WARNING] {msg}")
  
  async def check_remaining(self, output_queue, queue_name=""):
    while (not output_queue.empty()):
      output = await output_queue.get()
      msg = (f"No corresponding output for "
        f"{queue_name} output ={output}")
      if self.fatal:
        raise RuntimeError(msg)
      else:
        print(f"[WARNING] {msg}")

  async def check(self, expected_queue, actual_queue):
    self.check_len(expected_queue, actual_queue)
    await self.check_output(expected_queue, actual_queue)
    await self.check_remaining(expected_queue, "expected")
    await self.check_remaining(actual_queue, "actual")
      
    
  