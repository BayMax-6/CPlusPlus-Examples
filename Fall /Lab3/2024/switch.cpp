/*
    name: Addison 
    date: 2/1/23
    purpose: TA Examples 
    title: Lab 3 Switches 
*/

//simple include statement
#include <iostream> 

using namespace std; //this is so we're not doing std:: before each line

//start of our program
int main (){

//defining variables
int numSnacks = 0;

//asking the user for some input
cout << "Please enter in the packets of fruit snacks you eat (1-5): ";
cin >> numSnacks; //this is where we are going to store the users answer

//making things pretty 
cout << "----------------------------------------------------------------------------"; //I'll show you a better way to do this later, but for now in lab 3 this is fine! 

//beginning of our switch statement - notice the variable we're using and what data type it is!
switch (numSnacks){

    //case 1 if the user enters the value '1'
    case 1: 
            cout << "\nThat is not enough to have a happy life.\n";
            cout << "Eat more fruit snacks\n";
            break;

    //case 2 if the user enters the value '2'
    case 2:
            cout << "\nThat's ok i guess. Still need more!!\n";
            break; 

    //case 3 if the user enters the value '3'
    case 3: 
            cout << "\nThat's a decent amount of fruit snacks.\n";
            cout << "But there's still room for improvement!\n";
            break; 

    //case 4 if the user enters the value '4'
    case 4: 
            cout << "\nNow we're getting to better numbers!\n";
            cout << "Took you long enough, but you could still keep going.\n";
            break;

    //case 5 if the user enters the value '5'
    case 5: 
            cout << "\nTHERE WE GO!!\n";
            cout << "SO SUPER PROUD OF YOU!!\n";
            break; 

    //this default case is a catch all if the user enters something other than 1-5
    default: 
            cout<< "\nI know counting is hard, but you need to enter 1,2,3,4 or 5.\n";
            cout<< "Better not enter in all 5 numbers in either!!\n";
}

//this is good programming practice!
return 0;
}


