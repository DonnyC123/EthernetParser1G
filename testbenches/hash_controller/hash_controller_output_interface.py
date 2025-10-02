from dataclasses import dataclass

@dataclass
class HashControllerOutputInterface:
  ip_addr_found_o: bool = False
  ip_addr_found_valid_o: bool = False