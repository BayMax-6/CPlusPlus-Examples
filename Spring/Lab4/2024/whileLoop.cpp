/*
    Name: Addison Goforth
    Date: 2/14
    Purpose: Teaching while loops
    Files: whileLoop.cpp
*/

#include <iostream> 

using namespace std; 

int main(){

    int userNum =0; 

    cout << "Please enter a number between 1 and 10: "; 
    cin >> userNum; 

    while (userNum > 10 || userNum < 1){ 
        cout << "That is an invalid input." << endl; 
        cout << "Please enter a number between 1 and 10: ";
        cin >> userNum; 
    }

    if (userNum > 1 && userNum < 4){
        cout << "Great job! \n";
    }
    else if ( userNum > 4 && userNum < 8){
        cout << "LEGOOOSSSS!!!\n"; 

    }
    else {
        cout << "Fun fact I love fruit snacks :)\n"; 
    }



return 0; 

}