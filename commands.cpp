#include "commands.h"

void pwdFunc() {	
	char newline = '\n';
	char *path = getenv("PWD");
  write(STDOUT_FILENO, path, strlen(path));
	write(STDOUT_FILENO, &newline, 1);
}

void lsFunc() {
}
