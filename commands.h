#include <iostream>
#include <string>
#include <stdlib.h>
#include "unistd.h"

//command option class; don't use yet
class option {
	std::string opt;
};

//commands class
class command {
	std::string command;
	std::string file;	
	public:
		void setCommand(std::string input);
		void setFile(std::string input);
};

void pwdFunc();
void histFunc(); 
void cdFunc(); 
void lsFunc(); 
