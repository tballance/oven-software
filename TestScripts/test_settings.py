
import time

# import serial

# command_port="/dev/ttyO1"
# data_port="/dev/ttyO4"

# timeout=1
# sc = serial.Serial(
#     port=command_port,
#     baudrate=115200,
#     timeout=timeout
#     )

# while(1):
#     print(sc.readline())

import oven_pic_interface

p = oven_pic_interface.OvenPICInterface()
#p._DEBUG = False

p.settings_print()

# p.settings_load()

# p.settings_print()

# #p.settings_save()

# p.settings_print()

# p.settings_load()

print(p.adc_read_calibrated_sample())
