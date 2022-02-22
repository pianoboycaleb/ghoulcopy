#!/usr/bin/python3
# 
# convert_metatile_attribytes.py
#   converts FR tile attribute .bin files to EM style
#
# input:
#   ./convert_metatile_attribytes.py <primary or secondary>
#       eg. ./convert_metatile_attribytes.py secondary
#
from sys import argv
import os, subprocess, struct

NUM_TILES_IN_PRIMARY = 640
NUM_TILES_TOTAL = 1024
NUM_METATILES_IN_PRIMARY = 640
NUM_METATILES_TOTAL = 1024

def create_new_behavior(path):
    file = os.sep.join([path, 'metatile_attributes.bin'])
    num = int(os.path.getsize(file) / 4)
    
    with open(file, 'rb') as f:
        new_data = bytearray(num * 2)
        data = f.read(num * 4)
        for i in range(0, num):
            behavior = data[i * 4]
                    
            new_data[i * 2] = behavior
            bg = data[i * 4 + 3]
            if bg & 0x20 == 0x20:
                bg = 0x10
            new_data[i * 2 + 1] = bg

    with open(os.sep.join([path, 'metatile_attributes.bin']), 'wb+') as f:
        f.write(new_data)
    
if __name__ == '__main__':
	path = os.sep.join([os.curdir, 'data', 'tilesets', str(argv[1])])
	for i in os.listdir(path):
		dir = os.sep.join([path, i])
		create_new_behavior(dir)
	exit()
