/*
    Name: Addison Goforth
    Date: 2/6
    Purpose: Teaching if else statements
    Files: ifelseifelse.cpp
*/

#include <iostream> 
#include <iomanip>

using namespace std; 

int main(){

    //variables 
    double userNum; 

    cout << "Please enter in a number between 1 and 3: "; 
    cin >> userNum; 
    cout << endl; 
    //if else statement 

    if (userNum == 1){
        cout << "You will have a great semester! And pass all of your classes.\n";
    }
    else if (userNum == 2){
        cout << "You will have an ok semester and be constantly watching spongebob.\n"; 
    }
    else if (userNum == 3){
        cout << "You will not have a great semester and all because you lost you attendance card :). \n"; 
    }
    else {
        cout << "Invaild input and your ability to read is failing!!!\n"; 
    }


return 0; 





 






return 0; 

}