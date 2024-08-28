/*
    name: Addison Goforth
    date: 3/19/24
    files: simple2DArray.cpp
    purpose: playing with arrays
*/

#include <iostream>

using namespace std;

int main() {
    //creating a constant int 
    //this is Ms.Crockett Prefference, but you don't have to if you don't like it
    const int SIZE = 3;
    //here is where we're creating our 2D array of SIZE SIZE 
    //which is fine since we want both arrays to be of size 3
    int array[SIZE][SIZE] = {{1, 2, 3},   //you don't have to format it like this, but for the first couple times
                             {4, 5, 6},   //it's easier to understand what's going one and how the array looks
                             {7, 8, 9}};
                        
    
    // Printing the elements of the array
    cout << "2D Array:\n";

    //all this for loop does is print the array to the screen 
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}