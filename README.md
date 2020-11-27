# Personal
Personal files 

```c
#include <stdio.h>

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
$ # gcc: * indicates any file you want (not all files i.e shell expansion)
$ gcc <*.c> <*.o> -o <a.out> # .o is optional gives executable
$ gcc -c <*.c> <*.o> -o <a.out> # .o is optional  gives object files
$ gcc <*.c> -S <a.s> # gives executable
$ as a.s -o a.o ; ld a.o -o a.out ; ./a.out # will assemble a.s (Note: if gives error: add .global _main to start


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
vi: $ vimtutor
other  commands : see "the linux command line" book
```
