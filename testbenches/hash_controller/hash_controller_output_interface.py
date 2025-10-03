from dataclasses import dataclass

@dataclass
class HashControllerOutputInterface:
  ip_addr_found_o: bool = False
  ip_addr_found_valid_o: bool = False
  
  
  @property
  def valid(self) -> bool:
    return self.ip_addr_found_valid_o