# ashblocks

rav3ndust's fork of **dwmblocks**, a modular status bar for dwm written in c.

# Modifying blocks

The statusbar is made from text output from commandline programs.  Blocks are
added and removed by editing the config.h file.

# Raven's build

ashblocks reads scripts from the root folder, and displays them up in the status bar of the window manager. They include: 

- *ssc*, our screenshot tool. This is clickable. 
- *Network status*. Clickable - clicking it will open *nmtui* so you can edit your network connection graphically. 
- *Volume controls*. Also clickable, or usable through **(super)+(+)** keybinding.
- *Notification count* as counted up by **dunst**, our notification manager. 
- *user@hostname* - vanity
- *date* - displays the date
- *time* - Must I really explain what this one does? 

# Signaling changes

Most statusbars constantly rerun every script every several seconds to update.
This is an option here, but a superior choice is giving your module a signal
that you can signal to it to update on a relevant event, rather than having it
rerun idly.

For example, the audio module has the update signal 10 by default.  Thus,
running `pkill -RTMIN+10 dwmblocks` will update it.

You can also run `kill -44 $(pidof dwmblocks)` which will have the same effect,
but is faster.  Just add 34 to your typical signal number.

My volume module *never* updates on its own, instead I have this command run
along side my volume shortcuts in ashWM to only update it when relevant.

Note that all modules must have different signal numbers.

# Clickable modules

Like i3blocks, this build allows you to build in additional actions into your
scripts in response to click events.  See the above linked scripts for examples
of this using the `$BLOCK_BUTTON` variable.

For this feature to work, you need the appropriate patch in dwm as well. See
[here](https://dwm.suckless.org/patches/statuscmd/).
Credit for those patches goes to Daniel Bylinka (daniel.bylinka@gmail.com).

## Credits

My fork of **dwmblocks** is itself a fork of Luke Smith's build with some of my own custom scripts built on top.
