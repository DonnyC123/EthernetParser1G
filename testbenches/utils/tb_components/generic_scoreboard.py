import cocotb
from cocotb.queue import Queue

class GenericScoreboard:
  def __init__(self, model_transaction_queue, monitor_transaction_queue):
    