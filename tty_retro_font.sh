setfont Lat15-Terminus32x16
#setfont Lat38-VGA32x16.psf.gz
#sleep 0.1
#stty columns 80 rows 25
#sleep 0.1
#bash
#setupcon -current-tty
#sleep 0.1
export PS1="\w% "
setfont /usr/share/consolefonts/Lat7-VGA32x16.psf.gz
