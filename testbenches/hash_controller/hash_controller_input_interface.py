from dataclasses import dataclass

@dataclass
class HashControllerInputInterface:
  insert_val_i: bool = False
  look_up_val_i: bool = False
  ip_addr_i: int = 0