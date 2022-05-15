#!/bin/bash
# easyshot
#taking screenshots with scrot
easyshot="📷"
shot=$(scrot -s Pictures/Screenshots/easyshot.png)
case $BLOCK_BUTTON in
	1) scrot -s Pictures/Screenshots/easyshot.png;;
esac
echo "$easyshot $shot"
