from dataclasses import dataclass

@dataclass
class RxMacOutputInterface:
  rx_data_o: bytes = 0
  rx_data_valid_o: bool = 0
  is_preamble_or_sfd_o: bool = 0
  is_dst_mac_o: bool = 0
  is_src_mac_o: bool = 0
  is_ether_type_o: bool = 0
  is_payload_or_crc_o: bool = 0
  invalid_frame_o: bool = 0
  
  @property
  def valid(self) -> bool:
    return self.rx_data_valid_o