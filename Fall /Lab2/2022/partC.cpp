/*
Name: Addison Goforth
Date: 1/29/23
Purpose: Teaching example
Name of File/s: partA.cpp
*/

#include <iostream> 
#include <iomanip>

using namespace std;

int main(){


string month ;
double coffeeNum = 0, coffeeNum2 = 0, coffeeNum3 = 0, coffeeNum4 = 0;
cout << fixed << setprecision(2);
double total = 0, total2 = 0;
double average;

cout << "How many times you drink coffee during the months (2): ";

cout << "\nMonth: ";
cin >> month; 
cout << "Week 1: "; 
cin >> coffeeNum;
cout << "Week 2: "; 
cin >> coffeeNum2;
cout << "Week 3: "; 
cin >> coffeeNum3;
cout << "Week 4: "; 
cin >> coffeeNum4;

total = coffeeNum + coffeeNum2 + coffeeNum3 + coffeeNum4; 
cout << "Total number of coffee's in " << month << " is " << total<< endl; 

cout << "\nMonth: ";
cin >> month; 
cout << "Week 1: "; 
cin >> coffeeNum;
cout << "Week 2: "; 
cin >> coffeeNum2;
cout << "Week 3: "; 
cin >> coffeeNum3;
cout << "Week 4: "; 
cin >> coffeeNum4;

total2 = coffeeNum + coffeeNum2 + coffeeNum3 + coffeeNum4; 
cout << "Total number of coffee's in " << month << " is " << total2<< endl; 

average = (total + total2)/2;
cout << "Average amount of coffee drank in two months is: "<< average << endl; ;


return 0;

}