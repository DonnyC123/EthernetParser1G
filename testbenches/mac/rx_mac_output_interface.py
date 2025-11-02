from dataclasses import dataclass

@dataclass
class RxMacOutputInterface:
  rx_data_o: bytes = bytes()
  rx_data_valid_o: bool = False
  is_preamble_or_sfd_o: bool = False
  is_dst_mac_o: bool = False
  is_src_mac_o: bool = False
  is_ether_type_o: bool = False
  is_payload_or_crc_o: bool = False
  invalid_frame_o: bool = False
  
  @property
  def valid(self) -> bool:
    return self.rx_data_valid_o