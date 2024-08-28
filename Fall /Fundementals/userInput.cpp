/*
Name: Addison Goforth
Date: 1/20/23
Purpose: Printing out a Statement
Name of File/s: helloworld.cpp
*/

#include <iostream>

using namespace std;

int main (){

    // best practice to have all var defined a the top- no magic numbers!!
    int number =0;

    cout << "Enter a number: ";
    cin >> number;

    cout << "You entered " << number;

    return 0; // always a good idea to add this at the bottom

}