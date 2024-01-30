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
int numShellsFound = 0; 
int yardsLeft = 0; 
int totalNeeded = 0; 


cout << "Finding Dory Calculator: "; 

cout << "\nEnter the amount of purple shells found: ";
cin >> numShellsFound; 

cout << "Enter how many yards are left on the trail: ";
cin >> yardsLeft; 

totalNeeded = yardsLeft * 12809 - numShellsFound;
cout << "Shells still needed to find dory! .... :" << totalNeeded << " Shells" << endl;


return 0;

}