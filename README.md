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

