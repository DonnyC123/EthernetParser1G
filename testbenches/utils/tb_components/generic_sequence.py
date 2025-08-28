import cocotb
from cocotb.queue import Queue
from dataclasses import is_dataclass
from typing import Generic, TypeVar

InputInterfaceType = TypeVar("InputInterfaceType")

class GenericSequence(Generic[InputInterfaceType]):
  def __init__(self, driver):
    self.driver = driver
    
    cocotb.start_soon(driver.driver_loop())

  async def add_transaction(self, transaction: InputInterfaceType):
    await self.driver.send(transaction)
