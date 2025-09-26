import cocotb
from cocotb.triggers import RisingEdge, ReadOnly
from cocotb.queue import Queue
from dataclasses import fields
from typing import Generic, TypeVar, Type

from utils.tb_components.generic_monitor import GenericMonitor

OutputInterfaceType = TypeVar("T")

class GenericDataValidMonitor(GenericMonitor[OutputInterfaceType]):

  async def monitor_loop(self):
    while True:
      output_transaction = await self.receive_transaction()
      if output_transaction.valid: 
        await self.actual_queue.put(output_transaction)