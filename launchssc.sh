#!/bin/sh
#SSC=$(ssc)
cam='📷'
_ssc() {
	$SSC
}
case $BLOCK_BUTTON in
	1) ssc ;;
	3) notify-send "ssc" "snap a screenshot, save it to your clipboard." ;;
esac 
echo "$cam ssc" 
