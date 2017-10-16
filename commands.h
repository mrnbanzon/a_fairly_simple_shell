//header file for commands
#include <iostream>
#include <string>
#include <stdlib.h>
#include "unistd.h"

using namespace std;

//command option class; don't use yet
class option {
	string opt;
	option* next;
};

//commands class
class command {
	string command;
	string file;	
	public:
		void setCommand(std::string input);
		void setFile(std::string input);
};

void pwdFunc();
void histFunc(); 
void cdFunc(); 
void lsFunc(); 
