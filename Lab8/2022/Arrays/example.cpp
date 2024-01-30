/*
    name: Addison Goforth
    date: 3/28/23
    files: example.cpp
    purpose: playing with arrays
*/

#include <iostream>
using namespace std;

int main (){
    //Declare an array of size 10
    int myArray[10];

    //Initializing the array with int values
    for ( int i=0; i< 10; i++)
        myArray[i]=i;
    
    //Displaying the elements of the array
    for ( int i= 0; i< 10; i++)
        cout << myArray[i]<< " ";
    return 0;
}
// will output 0 1 2 3 4 5 6 7 8 9