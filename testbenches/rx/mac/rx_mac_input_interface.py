from dataclasses import dataclass

@dataclass
class RxMacInputInterface:
  rgmii_rx_data_i: int = 0
  rgmii_rx_ctrl_i: int = 0
  
  @classmethod
  def with_valid(cls, rgmii_rx_data_i: int = 0, valid: int = 1):
    return cls(rgmii_rx_data_i=rgmii_rx_data_i, rgmii_rx_ctrl_i=valid)
  
  @classmethod 
  def with_error(cls, rgmii_rx_data_i: int = 0, error: int = 1):
    return cls(rgmii_rx_data_i=rgmii_rx_data_i, rgmii_rx_ctrl_i=error)
  
  @property
  def valid(self):
    return self.rgmii_rx_ctrl_i
      
  @property
  def error(self):
    return self.rgmii_rx_ctrl_i