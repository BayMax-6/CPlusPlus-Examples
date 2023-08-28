/*
Name: Addison Goforth
Date: 1/29/23
Purpose: Teaching example
Name of File/s: partA.cpp
*/

#include <iostream> 
#include <cmath>

using namespace std;

int main(){

//defining vars
int apples = 0;
int pies = 5;


cout << "How many apples did Jimmy pick today: ";
cin >> apples;
 
pies = apples / pies; 
cout << "How many pies can Jimmy make? " << pies << endl; 


return 0;

}