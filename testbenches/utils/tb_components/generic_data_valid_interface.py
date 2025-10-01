from dataclasses import dataclass

@dataclass
class GenericDataValidInterface:
  data: bytes = bytes()
  valid: bool = False