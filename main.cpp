//basic linux shell
#include "commands.h"

int main() {
	string input;

	//obtain command and evaluate until exit
	while (true) {	
		cout << ">> ";
		cin >> input;

		if(input == "pwd") pwdFunc();
		else if(input == "ls") lsFunc();
		else if(input == "exit") break;
		else cout << "-bash: " << input << ": command not found" << endl;
	}

	return 0;
}
