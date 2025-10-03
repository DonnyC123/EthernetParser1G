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

from cocotb.triggers import Timer, RisingEdge

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
  await test_base.scoreboard.check()
  
  
@cocotb.test()
async def stress_test(dut):
  
  test_base = await init_test_base(dut)
  for _ in range(4000):
    await test_base.sequence.insert_val(random.randint(0, 10000))
  
  for _ in range(4000):
    await test_base.sequence.look_up_val(random.randint(0, 10000))
  
  await test_base.wait_for_driver_done()
  await test_base.scoreboard.check_with_error_tol(0.02)