
import time

from artiq.protocols.pc_rpc import Client
oven = Client("127.0.0.1", 5000, "atomic_oven_controller")


while(1):
    values = oven.adc_read_calibrated_sample()
    print(values[1]["temperature"])
    time.sleep(0.1)

