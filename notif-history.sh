#!/bin/bash

# notification history popup for dunst dwmblocks
notif_icon="🔔"
echo "$notif_icon $(dunstctl count history)"
