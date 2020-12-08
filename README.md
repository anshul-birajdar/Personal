```c
//try aub% tree / # or ls -r / IN ROOT USER OF COURSE in arch linux just after install
//log files in /var/log
// /usr/share/dict/words
// /etc/pacman or others . Just do : cd /etc;ls
//https://www.youtube.com/watch?v=NeOTr0u7ALk&list=TLPQMDExMjIwMjB1qYPUBUg54g&index=6
//https://www.youtube.com/watch?v=2YfM-HxQd_8&list=TLPQMDExMjIwMjB1qYPUBUg54g&index=5
//https://www.youtube.com/watch?v=bWMIpHVRFUo
//https://www.youtube.com/watch?v=aMAM5vL7wTs
//https://www.eecs.umich.edu/courses/eecs373/readings/Debugger.pdf
//size_t for var with reg len
//strip command for removing debugging info and make it faster and ready for shipping
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
//remember to include all for all functions
// $ ls -lhi


int main(void){
printf("Personal_files\n");

}

/*
MAN_PAGE_LINUX SECTIONS

1 	General commands
2 	System calls
3 	Library functions, covering in particular the C standard library
4 	Special files (usually devices, those found in /dev) and drivers
5 	File formats and conventions
6 	Games and screensavers
7 	Miscellanea
8 	System administration commands and daemons

uname -a
*/
```

```{shell}
. is current dir
.. is one behind 
~ is the home dir
/ is the root and the separater

see : https://en.wikipedia.org/wiki/Filesystem_Hierarchy_Standard

pacman -S NAME # installs NAME
pacman -SS Q # Searches Q as querie
pacman -R NAME # remove NAME
pacman -Syu # update
pacman -Syyyy # update repo info
man pacman  && pacman --help # for help
```

```
LINKS:
https://www.youtube.com/watch?v=uDPLlCB86uw&list=PLT98CRl2KxKHjq4YVsHqp9BbfDhtImhrN&index=15
https://www.youtube.com/watch?v=VoTD-NHo1TE&list=PLT98CRl2KxKHjq4YVsHqp9BbfDhtImhrN&index=16
https://www.youtube.com/watch?v=oBxXQSijTPc&list=PLT98CRl2KxKHjq4YVsHqp9BbfDhtImhrN&index=18

AUR: the arch user repo
YAY: THE aur HELPER https://www.tecmint.com/install-yay-aur-helper-in-arch-linux-and-manjaro/
luke dwm:
curl -LO larbs.xyz/larbs.sh
sh larbs.sh
super + f1/super f2 : in dwm-luke : manual
```






```
Common commands
Command 	Description
pacman -Syu <pkg> 	Install (and update package list)
pacman -S <pkg> 	Install only
pacman -Rsc <pkg> 	Uninstall
pacman -Ss <keywords> 	Search
pacman -Syu 	Upgrade everything
Query
Command 	Description
pacman -Qe 	List explictly-installed packages
pacman -Ql <pkg> 	What files does this package have?
pacman -Qii <pkg> 	List information on package
pacman -Qo <file> 	Who owns this file?
pacman -Qs <query> 	Search installed packages for keywords
Orphans
Command 	Description
pacman -Qdt 	List unneeded packages
pacman -Rns $(pacman -Qdtq) 	Uninstall unneeded packages

Avoid orphans by using pacman -Rsc to remove packages, which will remove unneeded dependencies.
Other
Command 	Description
pactree <pkg> 	What does pkg depend on?
pactree -r <pkg> 	What depends on pkg?
```
```{shell}
DONT FORGET C PROGRAMMING : READ  " THe c prog lang by k&r " : note int main(void) instead of main()

$ # gcc: * indicates any file you want (not all files i.e shell expansion)
$ gcc <*.c> <*.o> -o <a.out> # .o is optional gives executable
$ gcc -c <*.c> <*.o> -o <a.out> # .o is optional  gives object files
$ gcc <*.c> -S <a.s> # gives executable
$ as a.s -o a.o ; ld a.o -o a.out ; ./a.out # will assemble a.s (Note: if gives error: add .global _main to start
$ hexdump -C files

```

```
Permissions:
each digit
-rw-rw-r--  1 anshul anshul  120 Nov 27 12:42  a.c
 >~~~~~~~>Permissions
 >File type -:normal or hard link , d: directory , l:symlink; socket pipe charachter block : with their first charachter 

chmod : octal :
to binary
000 0 :nothing
001 1 :x
010 2 :w
011 3 :wx 
100 4 :r
101 5 :rx
110 6 :rw
111 7 :rwx
+ add perm with the numonic
- rem |------------------|
u user g group o other
ex : $ chmod u+x filename
sticky suid sgid :
uid: set uid of owner rather than curent user
add 4 to last digit of chmod which is 0 so not required or chmod name+s
gid: set gid of ownergrp rather than curent user's grp
add 2 to last digit or chmod name+g
sticky:prevent deletion of dir or content of it not created by user even if permission is granted : used in /tmp to hold temp files
add 1 to last digit or chmod name+g

Users & Groups:
$ passwd <user> # sets the password for user , default is root
/etc/passwd: user info
fields
1:name
2:password # x for encrypted
3:UID # user id
4:GID # GRoup id
5 comment
6:home dir
7:login shell

chown 
$ chown user:group filenames filename dirname dirnames file1 file2 file3 anyotherfile
/etc/shadow : password & stuff
fields
1:login name
2:password : encrypted
3:Days since epoch passwd was last changed
4:days before      password may be change ( To prevent users from changing their password )
5:Days after which |----------------------------------------------------------------------|
6:Days before which the password expires does the user be warned
7:days after which password expired is account disabled
8:Days since epoch the account should be disabled
9:Reserved

gpasswd for changing group password
$ gpasswd group
Enter new passwd:
password successfully updated!

/etc/group
fields 
1:group name
2:group passwd
3:gid
4:member of group # ex : aub,bwk,xyz,sdfjwf,sdsdf,hero (separated by commas)

/etc/gshadow
fields
1:grp name
2:grp passwd
3:grp admin
4:member of grp
```
```
processes:
top,htop for top processes
ps aux : get all
ps aux | grep name to get pid
kill pid  # to kill process
killall anyname # to kill processes with name "anyname"
```

```
networkinbg
ifconfig  # to see internet connections
ifconfig lan_name ipaddr #to cofig
traceroute
ping sitename.com # pings the site until press ^C (useful for checking net is there)
traceroute google.com # to trace the route of packets
vi: $ vimtutor
other  commands : see "the linux command line" or "unix for 7th graders" books
ls    --color=auto is often aliased to ls ; try $ /bin/ls   # color is not there
grep|---------------------------------------------/bin/grep---------------------|
grep usage 
$ grep searchterm filename
ls cp mv cd pwd mkdir ln ln\ -s free df du echo tail head wc grep sed whoami su id gpasswd passwd chmod chown  gpasswd w useradd(also: add entry in /etc/passwd and run passwd command the password field should be a space i.e spacebar) userdel chgrp(also chmod user:group)  ssh telnet 

absolute relative path
apt for debian ubuntu
tar gzip zip
* and ? in shell (+ other regex)
free
tty <ctrl alt f1-f7>
sspc login:name
password:
note : password is hidden
name@sspc:~$ ls
Desktop  Documents  Downloads	Music  Pictures  Public   Templates  Video
name@sspc:~$logout


```
```
env var(s)
$HOME is a var
to set it 
$ HOME=~ # notice the space. $ is the prompt
$ # this is a comment
echo $PATH # to get the value of $PATH notice the $is there when getting the value and not while setting it : =is there on the right side to tell the shell that var assignment is going on
PATH=favdir:$PATH # will add favdir/* files non-recursively to the list of executables temporarily
note : dir name are separated by ":"
note that when shell finds two or more : then it will chose the first one so to prevent some programs to disappear and the wrong on execs : do
PATH=$PATH:favdir
for permanant solution add it to your $HOME/.bash_profile or ~/.bashrc
to export shell vars : export varname # for permanant solution add it to your $HOME/.bash_profile or ~/.bashrc
scrips 
list of commads in a file to exec one by one
file a
#!/bin/bash > The interpter of script
#.... the whole script here the exported vars will also be available
```
```
~/.bash_profile : exec  for login shell
~/.bashrc :  exec all times
~/.profile  : exec for login shell
sequence /etc/profile ~/.profile ~/.bashrc /etc/bashrc
```

```
which : finds commands if exist
fg command eqivalent to  $ command
bg command eqivalent to  $ command& or if aldready in press ^Z
^C to exit
^D some times (EOF also)
```
```
cal : calendar
date
man : help
whereis : find files anywhere in fs
cat: print files
abs vs rel path
UNIX for 7th graders book pdf from b-ok.asia
cat /proc/cpuinfo
|'s in linux ex. ls|grep anshul|less
file find jobs kill killall echo $?

print program names in c
#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("program's name is: %s\n",argv[0]);
	return 0;
	// from argv[1] to ... is the args 
}

learn risc v assembly/machine code
function pointer
lspcie command
in normal mode in vi, type o to add a new line and enter in inst mode
tiling window manager

vim:
press escape and o to insert a line
diff,date command
```
