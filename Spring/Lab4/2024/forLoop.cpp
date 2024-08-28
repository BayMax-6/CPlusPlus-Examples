/*
    Name: Addison Goforth
    Date: 2/12/24
    Purpose: Teaching for loops
    Files: forLoop.cpp
*/

#include <iostream> 


using namespace std; 

int main(){

    int userNum; 

    cout <<"Enter the highest number you can think of! : ";
    cin >> userNum; 


    for(int i = 0; i <= userNum; i++)
    {
        cout << i << endl;
    }
    
return 0; 

}