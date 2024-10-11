/*
    Name: Addison Goforth
    Date:2/21
    Purpose: Teaching functions
    Files: function 1.cpp
*/

#include <iostream>

using namespace std;

//Function prototype of displayMessage()
void displayMessage(int);

int main()
{
    int num1 = 0; 

    cout << "Hello from main.\n";

    displayMessage(); 
   
    cout << "Back in function main again.\n";
   
   return 0;
} 

//Function definition of displayMessage()
void displayMessage()
{
   cout << "Hello from the function displayMessage.\n";
}