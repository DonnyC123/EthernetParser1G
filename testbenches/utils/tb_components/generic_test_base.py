from utils.tb_common import initialize_tb

from utils.tb_components.generic_driver import GenericDriver
from utils.tb_components.generic_sequence import GenericSequence
from utils.tb_components.generic_monitor import GenericMonitor
from utils.tb_components.generic_scoreboard import GenericScoreboard
from utils.tb_components.generic_model import GenericModel
from utils.tb_components.generic_checker import GenericChecker
from utils.tb_components.generic_data_valid_interface import GenericDataValidInterface

class GenericTestBase():
  def __init__ (self, 
    dut, 
    driver=GenericDriver,
    input_interface=GenericDataValidInterface, 
    sequence=GenericSequence, 
    monitor=GenericMonitor, 
    output_interface=GenericDataValidInterface, 
    scoreboard=GenericScoreboard,
    model=GenericModel,
    checker=GenericChecker
  ):
    self.dut = dut
    self.driver = driver(dut=dut, input_interface=input_interface)
    self.sequence = sequence(driver=self.driver)
    self.monitor = monitor(dut=dut, output_interface=output_interface)
    self.scoreboard =  scoreboard(monitor=self.monitor, model=model, checker=checker)
  
  
  