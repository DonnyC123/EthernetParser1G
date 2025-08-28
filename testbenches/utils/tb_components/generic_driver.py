from cocotb.triggers import RisingEdge
from cocotb.queue import Queue
from dataclasses import fields, is_dataclass
from typing import Generic, TypeVar

InputInterfaceType = TypeVar("InputInterfaceType")

class GenericDriver(Generic[InputInterfaceType]):
  def __init__(self, dut):
    self.dut = dut
    self.seq_item_queue: Queue[InputInterfaceType] = Queue()

  async def send(self, transaction: InputInterfaceType):
    await self.seq_item_queue.put(transaction)

  async def driver_loop(self):
    while True:

      input_stimulus = await self.seq_item_queue.get()
      await self.drive_transaction(input_stimulus)
      await RisingEdge(self.dut.clk)
      

  async def drive_transaction(self, input_stimulus: InputInterfaceType):
    for field in fields(input_stimulus):
      value = getattr(input_stimulus, field.name)

      if hasattr(self.dut, field.name):
        getattr(self.dut, field.name).value = value
      else:
        raise AttributeError(
          f"DUT has no signal named '{field.name}'"
        )