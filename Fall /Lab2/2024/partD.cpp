/*
title: Fall 2024 Lab 2
name: Addison Goforth
date: 8/28/24
purpose: lab 2 example
*/

#include <iostream>
#include <string>
using namespace std; 

int main(){ 

    //defining variables 
    string name; 
    int age; 
    //cin, cout, and equaltions 
    cout << "What is your name: "; 
    getline(cin, name); 

    cout << "How old are you: "; 
    cin >> age; 

    //do we need cin.ignore()
    //return statement 
    return 0; 
}