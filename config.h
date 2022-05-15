//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 	"internet.sh", 3, 0},
	{"",    "echo '|'", 0, 1},
	{"",    "volume.sh", 1, 2},
	{"",    "echo '|'", 0, 3},
	{"",    "notif-history.sh", 10, 4},
	{"",    "echo '|'", 0, 5},
	{"",	"battery.sh", 3, 6},
	{"", 	"echo '|'", 0, 7},
	{"",    "echo $USER at $HOSTNAME", 0, 8},
	{"",    "echo '|'", 0, 9},
	{"",    "echo $(date +%D)", 60, 10},
	{"",    "echo '|'", 0, 11},
	{"",    "echo $(date +%r)   ", 1, 12},
//	{"",	"easyshot.sh", 0, 13},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
