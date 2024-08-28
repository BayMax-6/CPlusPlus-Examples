/*
    Name: Addison Goforth
    Date:2/21
    Purpose: Teaching functions
    Files: function 1.cpp
*/

#include <iostream> 
using namespace std; 

//function prototype
int add(int num1, int num2); 


int main(){ 

    int num1 =0, num2 = 0; 
    cout << "Please enter in number 1: "; 
    cin >> num1; 

    cout << "Please enter in number 2: "; 
    cin >> num2; 
    cout <<"Sum: " << add(num1, num2) << endl; 

    return 0; 

}

int add(int num1, int num2){ 

    int Sum = num1 + num2; 

    return Sum; 
}