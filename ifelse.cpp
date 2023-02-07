/*
    Name: Addison Goforth
    Date: 2/6
    Purpose: Teaching if else statements
    Files: ifelse.cpp
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

if (userNum > 3){
    cout << "Invaild input and your ability to read is failing!!!\n"; 
}
else {
    cout << "You will have a great semester! And pass all of your classes.\n";
}

return 0; 

}