from typing import Generic, TypeVar

InputInterfaceType = TypeVar("InputInterfaceType")

class GenericSequence(Generic[InputInterfaceType]):
  def __init__(self, driver, *subscribers):
    self.driver = driver
    self.transaction_subscribers = self.transaction_subscribers = [s for s in subscribers if hasattr(s, 'notify')]

  def add_subscriber(self, *subscribers):
    self.transaction_subscribers.extend(subscribers)
  
  async def add_transaction(self, transaction: InputInterfaceType):
    await self.notify_subscribers(transaction)
    await self.driver.send(transaction)

  async def notify_subscribers(self, transaction):
    for sub in self.transaction_subscribers:
      if hasattr(sub, 'notify'):
        await sub.notify(transaction)
      else:
        print(f"Warning: Don't know how to notify {sub}")
