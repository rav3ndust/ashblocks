//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 	"echo '|'", 0, 0},
	{"", 	"$HOME/ashblocks/launchssc.sh", 0, 1},
	{"", 	"echo '|'", 0, 2},
	{"", 	"$HOME/ashblocks/internet.sh", 3, 3},
	{"",    "echo '|'", 0, 4},
	{"",    "$HOME/ashblocks/volume.sh", 1, 5},
	{"",    "echo '|'", 0, 6},
	{"",    "$HOME/ashblocks/notif-history.sh", 10, 7},
	{"",    "echo '|'", 0, 8},
	{"",	"$HOME/ashblocks/battery.sh", 3, 9},
	{"", 	"echo '|'", 0, 10},
	{"",    "echo $USER@$HOSTNAME", 0, 11},
	{"",    "echo '|'", 0, 12},
	{"",    "echo $(date +%D)", 60, 13},
	{"",    "echo '|'", 0, 14},
	{"",    "echo $(date +%r)   ", 1, 15},
	{"",	"echo '|'", 0, 16},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
