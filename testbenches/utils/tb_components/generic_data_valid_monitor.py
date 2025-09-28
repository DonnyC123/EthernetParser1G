from typing import TypeVar

from utils.tb_components.generic_monitor import GenericMonitor

OutputInterfaceType = TypeVar("T")

class GenericDataValidMonitor(GenericMonitor[OutputInterfaceType]):

  async def monitor_loop(self):
    while True:
      output_transaction = await self.receive_transaction()
      if output_transaction.valid: 
        await self.actual_queue.put(output_transaction)