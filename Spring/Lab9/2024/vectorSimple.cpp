/*
    name: Addison Goforth
    date: 4/2/24 
    purpose: showing a simple example of how to use a vector and print to the screen 
    file name: vectorSimple.cpp
*/


#include <iostream>
#include <vector>

using namespace std; 

int main() {
    //Creating a vector array with values 1-10
    vector<int> vectorArray;

    //this for loop puts values into the vector - should look simliar to what we would do for a simple array 
    for (int i = 0; i <= 10; i++){
        vectorArray.push_back(i);
    }

    //Printing the vector array
    for (int num = 0; num < vectorArray.size(); num++){
        cout << num << " ";
    }

    //this makes the output look nice! :) 
    cout << endl;

    return 0;
}

//this will output "0 1 2 3 4 5 6 7 8 9 10"