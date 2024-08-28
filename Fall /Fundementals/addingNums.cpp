/*
Name: Addison Goforth
Date: 1/20/23
Purpose: Printing out a Statement
Name of File/s: helloworld.cpp
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

int num1= 0;
int num2 = 0;

cout << "Enter two numbers to add together and get the sum!";
cout << "\nEnter first number: ";
cin >> num1;
cout << "\nEnter second number: ";
cin >> num2;

cout << "\nAnd your total is ..... :";
cout << num1 + num2;
cout << "\n";

return 0;

}