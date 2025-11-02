from cocotb import start_soon
from cocotb.triggers import RisingEdge, FallingEdge
from cocotb.queue import Queue
from dataclasses import fields, is_dataclass
from typing import TypeVar, Tuple

from utils.tb_components.generic_driver import GenericDriver

InputInterfaceType = TypeVar("InputInterfaceType")

class GenericDdrDriver(GenericDriver[InputInterfaceType]):

  async def driver_loop(self):
    while True:
      rising_stimulus, falling_stimulus = await self.seq_item_queue.get()
      await self.drive_transaction(rising_stimulus)
      await RisingEdge(self.dut.clk)
      
      await self.drive_transaction(falling_stimulus)
      await FallingEdge(self.dut.clk)
      