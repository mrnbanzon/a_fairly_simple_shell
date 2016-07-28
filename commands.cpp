#include "commands.h"
#include <stdio.h>

//pwd
void pwdFunc() {	
	char newline = '\n';
	char *path = getenv("PWD");
	write(STDOUT_FILENO, path, strlen(path));
	write(STDOUT_FILENO, &newline, 1);
}

//history
void histFunc() {

}

//cd
void cdFunc() {

}

//ls
void lsFunc() {

}
