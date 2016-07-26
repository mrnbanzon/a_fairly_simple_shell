#include <iostream>
#include <string>
#include <stdlib.h>
#include "unistd.h"

//command option class
class option {
	std::string opt;
	option* next;
};

//commands class
class command {
	std::string command;
	
};

void pwdFunc();
void histFunc(); 
void cdFunc(); 
void lsFunc(); 
