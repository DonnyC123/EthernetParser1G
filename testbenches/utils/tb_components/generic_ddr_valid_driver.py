import random

from cocotb import start_soon
from cocotb.triggers import RisingEdge, FallingEdge
from cocotb.queue import Queue
from dataclasses import fields, is_dataclass
from typing import TypeVar, Tuple

from utils.tb_components.generic_driver import GenericDriver

InputInterfaceType = TypeVar("InputInterfaceType")

class GenericDdrValidDriver(GenericDriver[InputInterfaceType]):    
  
  def __init__(self, dut, input_interface : InputInterfaceType):
    super().__init__(dut) 
    self.input_interface = input_interface
    
  
  def generate_random_stimulus(self):
    random_stimulus = self.input_interface()
    for field in fields(random_stimulus):
      setattr(random_stimulus, field.name, random.randint(0, (1 << field.metadata['bitwidth']) - 1))
    return random_stimulus
    
    
  async def driver_loop(self):
    while True:
      if (not self.seq_item_queue.empty()):
        rising_stimulus, falling_stimulus = await self.seq_item_queue.get()
        await self.drive_transaction(rising_stimulus)
        await RisingEdge(self.dut.clk)
        
        await self.drive_transaction(falling_stimulus)
        await FallingEdge(self.dut.clk)
      
      else:
        
        random_stimulus = self.generate_random_stimulus()
        random_stimulus.valid = 0
        await self.drive_transaction(random_stimulus)
        await RisingEdge(self.dut.clk)
        
        random_stimulus = self.generate_random_stimulus()
        await self.drive_transaction(random_stimulus)
        await FallingEdge(self.dut.clk)
      