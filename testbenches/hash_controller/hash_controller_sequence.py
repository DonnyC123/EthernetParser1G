import random
from typing import Union

from utils.tb_components.generic_sequence import GenericSequence

from hash_controller.hash_controller_input_interface import HashControllerInputInterface
from hash_controller.hash_notification_types import HashTransactionTypes
                             
class HashControlSequence(GenericSequence[HashControllerInputInterface]):
  def __init__(self, driver, *subscribers):
    super().__init__(driver, subscribers)
    
  async def insert_val(self, val: int):
      
    await self.notify_subscribers([HashTransactionTypes.INSERT, val])
    await self.add_transaction(
      HashControllerInputInterface(
        insert_val_i = True, 
        look_up_val_i = False, 
        ip_addr_i = val
      )
    )

    await self.send_random_invalid_transaction(3)
  
  async def look_up_val(self, val : int):
      
    await self.notify_subscribers([HashTransactionTypes.LOOKUP, val])
    await self.add_transaction(
      HashControllerInputInterface(
        insert_val_i = False, 
        look_up_val_i = True, 
        ip_addr_i = val
      )
    )
    await self.send_random_invalid_transaction(3)
  
  
  async def send_random_invalid_transaction(self, count):
    for _ in range(count):
      await self.add_transaction(
      HashControllerInputInterface(
        insert_val_i = False,
        look_up_val_i = False,
        ip_addr_i = random.randint(0, 2**32-1)
      )
    )
      
  async def add_transaction(self, transaction: HashControllerInputInterface):
    await self.driver.send(transaction)
    