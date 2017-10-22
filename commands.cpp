//commands implementation

#include "commands.h"

//global characters...
char newline = '\n';
char space = ' ';
char d = 'd';
char r = 'r';
char w = 'w';
char x = 'x';
char dash = '-';

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
	char* path = getenv("PWD");
  DIR* directory = opendir(path);
	struct dirent* file;
	struct stat permissions;
								           
	//if directory doesn't exist; do nothing
	if(directory == NULL) {} 		
	
	//else print directory
	else {
		while( (file=readdir(directory)) ) {
			stat(file->d_name, &permissions);

			//Printing file permissions
			if(permissions.st_mode & S_IFDIR) write(STDOUT_FILENO, &d, 1);
			else write(STDOUT_FILENO, &dash, 1);

			if(permissions.st_mode & S_IRUSR) write(STDOUT_FILENO, &r, 1);
			else write(STDOUT_FILENO, &dash, 1);

			if(permissions.st_mode & S_IWUSR) write(STDOUT_FILENO, &w, 1);
			else write(STDOUT_FILENO, &dash, 1);
									
			if(permissions.st_mode & S_IXUSR) write(STDOUT_FILENO, &x, 1);
			else write(STDOUT_FILENO, &dash, 1);
																		
			if(permissions.st_mode & S_IRGRP) write(STDOUT_FILENO, &r, 1);
			else write(STDOUT_FILENO, &dash, 1);
																											
			if(permissions.st_mode & S_IWGRP) write(STDOUT_FILENO, &w, 1);
			else write(STDOUT_FILENO, &dash, 1);
																																				
			if(permissions.st_mode & S_IXGRP) write(STDOUT_FILENO, &x, 1);
			else write(STDOUT_FILENO, &dash, 1);
																																			
			if(permissions.st_mode & S_IROTH) write(STDOUT_FILENO, &r, 1);
			else write(STDOUT_FILENO, &dash, 1);
																																					
			if(permissions.st_mode & S_IWOTH) write(STDOUT_FILENO, &w, 1);
			else write(STDOUT_FILENO, &dash, 1);

			if(permissions.st_mode & S_IXOTH) write(STDOUT_FILENO, &x, 1);
			else write(STDOUT_FILENO, &dash, 1);

			//write filename
			write(STDOUT_FILENO, &space, 1);
			write(STDOUT_FILENO, file->d_name, strlen(file->d_name)); 
			write(STDOUT_FILENO, &newline, 1);
		}
	}
}
