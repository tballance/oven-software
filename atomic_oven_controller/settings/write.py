#!/usr/bin/env python
# Load all user configurable settings from file and program to flash

import atomic_oven_controller.interface
import argparse
import artiq.protocols.pyon as pyon

parser = argparse.ArgumentParser(
    description="Load all user configurable settings from file and program to flash")
parser.add_argument("file")
args = parser.parse_args()

settings = pyon.load_file(args.file)

p = atomic_oven_controller.interface.Interface(timeout=2)

p.settings_write(settings)
p.settings_save()
