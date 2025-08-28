import cocotb
from cocotb.triggers import RisingEdge, ReadOnly
from cocotb.queue import Queue
from dataclasses import fields, is_dataclass
from typing import Generic, TypeVar

OutputInterfaceType = TypeVar("T")

class GenericMonitor(Generic[OutputInterfaceType]):
  
  def __init__(self, dut):
    self.dut = dut
    self.transaction_queue: Queue[OutputInterfaceType] = Queue()
    
  async def monitor_loop(self):
    while True:
      output_transaction = await self.receive_transaction()
      self.transaction_queue.put(output_transaction)
  
  async def receive_transaction(self) -> OutputInterfaceType:
    await RisingEdge(self.dut.clk)
    await ReadOnly()
      
    output_transaction = OutputInterfaceType()

    for field in fields(output_transaction):
      if hasattr(self.dut, field.name):
        value = getattr(self.dut, field.name).value
        getattr(output_transaction, field.name) = value
      else:
        raise AttributeError(
          f"DUT has no signal named '{field.name}'"
      )
      