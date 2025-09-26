from cocotb import start_soon
from cocotb.triggers import RisingEdge, ReadOnly
from cocotb.queue import Queue
from dataclasses import fields
from typing import Generic, TypeVar, Type

OutputInterfaceType = TypeVar("T")

class GenericMonitor(Generic[OutputInterfaceType]):
  
  def __init__(self, dut, output_interface: Type[OutputInterfaceType]):
    self.dut = dut
    self.output_interface: Type[OutputInterfaceType] = output_interface
    self.actual_queue: Queue[OutputInterfaceType] = Queue()
    start_soon(self.monitor_loop())
    
  async def monitor_loop(self):
    while True:
      print("parent loop")
      output_transaction = await self.receive_transaction()
      await self.actual_queue.put(output_transaction)
  
  async def receive_transaction(self) -> OutputInterfaceType:
    await RisingEdge(self.dut.clk)
    await ReadOnly()
      
    output_transaction = self.output_interface()
    for field in fields(output_transaction):
      if hasattr(self.dut, field.name):
        value = getattr(self.dut, field.name).value
        setattr(output_transaction, field.name, value)
      else:
        raise AttributeError(
          f"DUT has no signal named '{field.name}'"
        )
    return output_transaction