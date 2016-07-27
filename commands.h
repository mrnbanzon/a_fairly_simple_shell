#include <iostream>
#include <string>
#include <stdlib.h>
#include "unistd.h"

//command option class; don't use yet
class option {
	std::string opt;
	option* next;
};

//commands class
class command {
	std::string command;
	std::string file;	
	public:
		void setCommand(string input);
		void setFile(string input);
};

void pwdFunc();
void histFunc(); 
void cdFunc(); 
void lsFunc(); 
