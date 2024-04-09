/*
    name: Addison Goforth
    date: 4/9/24 
    purpose: showing how to create a dynamically allocated array, print it to the screen
             and then delete the array. 
    file name: memoryAllocation.cpp
*/

#include <iostream>
using namespace std; 

int main() {

    //definging variables
    int size;
    
    //asking the user for a number 
    cout << "Enter the size of the array: ";
    cin >> size; 

    while(size < 0){ //this is just input validation!! 
        cout << "Please enter a positive value!"; 
        cin >> size; 
    }
    
    //this has to be after size because we need the value of size!
    int* array = new int[size]; //dynamically allocate an array of integers


    //fill the array with some values - we've done this before and it shouldn't be new!
    for (int i = 0; i < size; ++i) {
        array[i] = i + 1;
    }

    //print the array to the scree nice and pretty
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    
    //makes the output look nice to the screen! 
    cout << endl; 

    //delete the dynamically allocated array to free memory
    delete[] array;

    return 0;
}

/*
sample output with an input of 4: 
    Enter the size of the array: 4
    Array elements: 1 2 3 4 
*/
