/*
    name: Addison Goforth
    Date: 8/28/23
    purpose: Debugging Example
    files: labA.cpp
*/

#include <iostream> 
using namespace std; 

int main(){

//variables
const int strawberries = 5;
int pies = 0; 
int total_strawberries = 0; 

cout << "How many pies are you wanting to make? ";
cin >> pies; 

total_strawberries = pies * strawberries; 

cout << "You would need " << total_strawberries << " strawberries to be able to make that many pies! \n";

return 0;

}