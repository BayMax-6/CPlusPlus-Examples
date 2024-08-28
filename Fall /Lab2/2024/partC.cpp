/*
title: Fall 2024 Lab 2
name: Addison Goforth
date: 8/28/24
purpose: lab 2 example
*/

#include <iostream>
using namespace std; 

int main(){ 

    //defining variables 
    char letter1; 
    double swap; 

    //cin, cout, and equaltions 
    cout << "What is your favorite letter? "; 
    cin >> letter1; 

    cout << "\nGive me a random number. Could be your favorite if you like! "; 
    cin >> swap; 

    cout << "\nYou have endered in " << letter1 << " ,but I'm sorry I don't like that letter."; 
    letter1 += swap; 

    cout << "\nNow we have the letter or symbol '" << letter1 << "' looks better doesn't it!" << endl; 

    //return statement 
    return 0; 

}