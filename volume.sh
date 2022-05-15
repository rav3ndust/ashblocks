#!/bin/bash

# volume indication/adjust script for dwmblocks. 
vol_icon="🔊"
vol_comm=$(pulsemixer --get-volume)
case $BLOCK_BUTTON in
	1) st pulsemixer;;
	2) notify-send "Volume Block" "Click to adjust the volume.";;
esac
echo "$vol_icon $vol_comm" 
