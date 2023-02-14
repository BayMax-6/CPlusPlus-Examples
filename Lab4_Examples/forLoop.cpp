/*
    Name: Addison Goforth
    Date: 2/14
    Purpose: Teaching for loops
    Files: ifelse.cpp
*/

#include <iostream> 


using namespace std; 

int main(){

    int userNum; 

    cout <<"Please enter a upper bound number: ";
    cin >> userNum; 


    for(int i = 0; i <= userNum; i++)
    {
        cout << i << endl;
    }
    
return 0; 

}