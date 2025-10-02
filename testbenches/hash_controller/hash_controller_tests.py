import cocotb
import sys
import os

project_root = os.path.abspath(os.path.join(os.path.dirname(__file__),  '..'))
sys.path.insert(0, project_root)

from utils.tb_components.generic_driver import GenericDriver
from hash_controller.hash_controller_sequence import HashControlSequence
from hash_controller.hash_controller_input_interface import HashControllerInputInterface
from hash_controller.hash_controller_output_interface import HashControllerOutputInterface
from hash_controller.hash_controller_model import HashControllerModel
from utils.tb_components.generic_scoreboard import GenericScoreboard
from utils.tb_components.generic_data_valid_monitor import GenericDataValidMonitor



from utils.tb_common import initialize_tb

@cocotb.test()
async def sanity_test(dut):
  await initialize_tb(dut, clk_period_ns=10)
  generic_driver = GenericDriver(dut)

  hash_controller_sequence = HashControlSequence(driver=generic_driver)
  hash_controller_model = HashControllerModel()
  hash_controller_monitor = GenericDataValidMonitor(dut, output_interface=HashControllerOutputInterface)
  hash_controller_scoreboard = GenericScoreboard(hash_controller_monitor, model=hash_controller_model)
  
  ip_addr = bytearray(4)
  print(ip_addr) 
  ip_addr_int = 12
  ip_addr_bytes = ip_addr_int.to_bytes(4, byteorder='big')
  await hash_controller_sequence.insert_val(ip_addr_bytes)
  await hash_controller_sequence.look_up_val(ip_addr_bytes)
  await hash_controller_sequence.look_up_val(123)
  
  await hash_controller_scoreboard.check()