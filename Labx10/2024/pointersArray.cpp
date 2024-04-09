/*
    name: Addison Goforth
    date: 4/9/24 
    purpose: showing to to deal with an array of pointers ( so much fun!! -_-) 
    file name: pointersArray.cpp
*/

#include <iostream>
using namespace std; 


int main() {

    const int arraySize = 5; //not my favorite, but you are allowed to use this in this lab!

    
    int* array[arraySize]; //create an array of pointers to integers

    //allocate memory for integers and assign them to array elements
    for (int i = 0; i < arraySize; i++) {
        array[i] = new int(i + 1); //allocate memory for an integer and assign its value
    }

    //print the array elements
    cout << "Array elements:" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << *array[i] << endl; //dereference the pointer and print the integer value
    }

    //delete allocated memory to prevent memory leaks
    for (int i = 0; i < arraySize; i++) {
        delete array[i]; //delete each dynamically allocated integer
    }

    return 0;
}

/*
Sample Output Until we change the constand int or make it a user input: 
    Array elements:
    1
    2
    3
    4
    5
*/