/*
    Name: Addison Goforth
    Date: 2/6
    Purpose: switch statements
    Files: switch.cpp
*/

#include <iostream> 
#include <iomanip>

using namespace std; 

int main(){

//variables 
int userNum; 


cout << "Please enter a number between 1 and 3: "; 
cin >> userNum; 
cout << endl; 

//switch statement 
switch(userNum){
		
		case 1: cout << "You will have a great semester! And pass all of your classes.\n";
				break;
				
		case 2: cout << "You will have an ok semester and be constantly watching spongebob.\n"; 
				break;
		
		case 3: cout << "You will not have a great semester and all because you lost you attendance card :). \n"; 
				break;

        default: cout << "Invaild input and your ability to read is failing!!!\n"; 

	}

return 0; 

}