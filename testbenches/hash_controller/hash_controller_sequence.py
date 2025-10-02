import random
from typing import Union

from utils.tb_components.generic_sequence import GenericSequence

from hash_controller.hash_controller_input_interface import HashControllerInputInterface
from hash_controller.hash_notification_types import HashTransactionTypes
                             
class HashControlSequence(GenericSequence[HashControllerInputInterface]):
  def __init__(self, driver, *subscribers):
    super().__init__(driver, subscribers)
    
  async def insert_val(self, val:  Union[int, bytes]):
    if not isinstance(val, bytes): 
      val = val.to_bytes(4, byteorder='big')
      
    await self.notify_subscribers([HashTransactionTypes.INSERT, val])
    await self.add_transaction(
      HashControllerInputInterface(
        insert_val_i = True, 
        look_up_val_i = False, 
        ip_addr_i = val
      )
    )

    await self.sendRandomValidTransaction(3, len(val))
  
  async def look_up_val(self, val : Union[int, bytes]):
    if not isinstance(val, bytes): 
      val = val.to_bytes(4, byteorder='big')
      
    await self.notify_subscribers([HashTransactionTypes.LOOKUP, val])
    await self.add_transaction(
      HashControllerInputInterface(
        insert_val_i = True, 
        look_up_val_i = False, 
        ip_addr_i = val
      )
    )
    await self.sendRandomValidTransaction(3, len(val))
  
  
  async def sendRandomValidTransaction(self, count, ip_addr_len):
    for _ in range(count):
      await self.add_transaction(
      HashControllerInputInterface(
        insert_val_i = False,
        look_up_val_i = False,
        ip_addr_i = random.randbytes(ip_addr_len)
      )
    )
      
  async def add_transaction(self, transaction: HashControllerInputInterface):
    await self.driver.send(transaction)
    