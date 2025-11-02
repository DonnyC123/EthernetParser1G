# from utils.tb_common import initialize_tb
# from cocotb.triggers import Timer, RisingEdge

from utils.tb_components.generic_test_base import GenericTestBase

from utils.tb_components.generic_ddr_valid_driver import GenericDdrValidDriver
from utils.tb_components.generic_data_valid_monitor import GenericDataValidMonitor
from utils.tb_components.generic_scoreboard import GenericScoreboard
from mac.rx_mac_input_interface import RxMacInputInterface 
from mac.rx_mac_output_interface import RxMacOutputInterface 
from mac.rx_mac_sequence import RxMacSequence
from mac.rx_mac_checker import RxMacChecker

# Can just use generic Base in the future
class RxMacTestBase(GenericTestBase):
  def __init__ (self, dut):
    super().__init__(
      dut=dut,
      driver=GenericDdrValidDriver,
      input_interface=RxMacInputInterface,
      sequence=RxMacSequence,
      monitor=GenericDataValidMonitor,
      output_interface=RxMacOutputInterface,
      scoreboard=GenericScoreboard,
      checker=RxMacChecker
    )
    
    self.sequence.add_subscriber(self.scoreboard)
    