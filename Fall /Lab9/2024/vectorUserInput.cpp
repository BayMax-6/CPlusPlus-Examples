/*
    name: Addison Goforth
    date: 4/2/24 
    purpose: showing a simple example of how to use a vector and print to the screen 
             with a user input!
    file name: vectorUserInput.cpp
*/


#include <iostream>
#include <vector>

using namespace std;

int main(){

    //here we're defining our variables (shocking!!)
    int maxValue;

    //Get user input for the max value
    cout << "Enter the highest number you can think of (don't try to hard!): "; // you could also ask for the minimum value if you wanted too! 
    cin >> maxValue;

    //Creating a vector array with user inputted max value
    vector<int> vectorArray;
    for (int i = 1; i <= maxValue; i++){
        vectorArray.push_back(i);
    }

    //Printing the vector array to the screen 
    for (int i = 0; i < vectorArray.size(); i++){
        cout << vectorArray[i] << " ";
    }

    //this again just makes the output look pretty
    cout << "\nHere are all the numbers inbetween that highest numeber starting at 1!" <<endl;

    return 0;
}

//sample output with input of 20:
/*
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 
Here are all the numbers inbetween that highest numeber starting at 1!
*/