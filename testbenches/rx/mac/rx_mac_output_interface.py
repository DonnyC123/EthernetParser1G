from dataclasses import dataclass

@dataclass
class RxMacOutputInferface:
  rgmii_data_o: bytes = 0
  rgmii_data_valid_o: bool = 0
  invalid_frame_o: bool = 0
  