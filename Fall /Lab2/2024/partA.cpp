/*
title: Fall 2024 Lab 2
name: Addison Goforth
date: 8/28/24
purpose: lab 2 example
*/

#include <iostream>
using namespace std; 

int main(){ 

    //define variabels 
    int numDogs = 0; 
    double numFood = 4; 

    //cin and count statements 
    cout << "How many dogs do you have? "; 
    cin >> numDogs; 
    cout << endl; 

    //equations *why do we have to put it here rather than at the top?* 
    double totalFood = numDogs * numFood; 

    cout << "You will need to have " << totalFood << " pounds of food for your " << numDogs << " dogs"<< endl; 

    //return statement 
    return 0; 

}