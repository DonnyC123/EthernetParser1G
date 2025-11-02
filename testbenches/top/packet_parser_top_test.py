import cocotb
import sys
import os
import random

project_root = os.path.abspath(os.path.join(os.path.dirname(__file__),  '..'))
sys.path.insert(0, project_root)

from utils.tb_components.generic_driver import GenericDriver
from utils.tb_components.generic_test_base import GenericTestBase
from hash_controller.hash_controller_sequence import HashControlSequence
from hash_controller.hash_controller_input_interface import HashControllerInputInterface
from hash_controller.hash_controller_output_interface import HashControllerOutputInterface
from hash_controller.hash_controller_model import HashControllerModel
from utils.tb_components.generic_scoreboard import GenericScoreboard
from utils.tb_components.generic_data_valid_monitor import GenericDataValidMonitor

from utils.tb_common import initialize_tb

async def init_test_base(dut):
  test_base = GenericTestBase(
    dut=dut,
    driver=GenericDriver,
    input_interface=HashControllerInputInterface,
    sequence=HashControlSequence,
    monitor=GenericDataValidMonitor,
    output_interface=HashControllerOutputInterface,
    scoreboard=GenericScoreboard,
    model=HashControllerModel
  )
  test_base.sequence.add_subscriber(test_base.scoreboard)
  
  await initialize_tb(dut, clk_period_ns=10)
  
  return test_base
  
@cocotb.test()
async def sanity_test(dut):
  
  test_base = await init_test_base(dut)
  await test_base.sequence.insert_val(10)
  await test_base.sequence.look_up_val(10)
  await test_base.sequence.insert_val(11)
  await test_base.sequence.look_up_val(123)
  
  await test_base.wait_for_driver_done()