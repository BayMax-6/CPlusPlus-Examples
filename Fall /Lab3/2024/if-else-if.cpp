/*
    name: Addison 
    date: 2/1/23
    purpose: TA Examples 
    title: Lab 3 If-else-if statements 
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

//if user enters in option 5
if (numSnacks < 6 && numSnacks > 4){ 
    cout << "\nTHERE WE GO!!\n";
    cout << "SO SUPER PROUD OF YOU!!\n";
}
//if user enters in option 4
else if(numSnacks < 5 && numSnacks > 3) { //4
    cout << "\nNow we're getting to better numbers!\n";
    cout << "Took you long enough, but you could still keep going.\n";
}
//if user enters in option 3
else if (numSnacks < 4 && numSnacks >2){ //3
    cout << "\nThat's a decent amount of fruit snacks.\n";
    cout << "But there's still room for improvement!\n";
}
//if user enters in option 2
else if (numSnacks < 3 && numSnacks > 1) {//2
    cout << "\nThat's ok i guess. Still need more!!\n";
}
//if user enters in option 1
else if(numSnacks < 2 && numSnacks > 0){//1
    cout << "\nThat is not enough to have a happy life.\n";
    cout << "Eat more fruit snacks!!\n";
}
//default option if user doesn't enter numbers 1-5
else{
    cout<< "\nI know counting is hard, but you need to enter 1,2,3,4 or 5.\n";
    cout<< "Better not enter in all 5 numbers in either!!\n";
}

//good programming practice 
return 0;   
}  