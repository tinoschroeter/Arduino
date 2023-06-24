#!/bin/bash

# sudo chmod a+rw /dev/ttyACM0
# arduino-cli core install arduino:avr

# search search and install library
# arduino-cli lib search Mozzi
# arduino-cli lib install Mozzi

if [ $# -eq 0 ]; then
  echo "Es wurde kein Ordner als Parameter übergeben."
  exit 1
fi

if [ ! -d "$1" ]; then
  echo "Der übergebene Parameter ist kein Ordner."
  exit 1
fi

sudo chmod a+rw /dev/ttyACM0
arduino-cli board list

arduino-cli compile --fqbn arduino:avr:uno $1
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:uno $1
