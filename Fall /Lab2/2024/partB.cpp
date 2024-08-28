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
    int numGoldfish = 0; 
    int numRedGoldfish = 0; 
    double redPrice = 1.99; 
    double orangePrice = 5.99; 
    double total = 0; 

    //cin, cout, and equaltions 

    cout << "How many orange goldfishes do you have? "; 
    cin >> numGoldfish;

    cout << "\nHow many red goldfishes do you have? "; 
    cin >> numRedGoldfish; 

    total = ( (numGoldfish * orangePrice) + ( numRedGoldfish * redPrice)); 

    cout << "\nAll of your goldfish together cost: " << total << endl; 

    //return statement 
    return 0; 

}