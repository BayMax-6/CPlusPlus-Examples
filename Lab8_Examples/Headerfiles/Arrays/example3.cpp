/*
    name: Addison Goforth
    date: 3/28/23
    files: example3.cpp
    purpose: playing with arrays
*/

#include <iostream>
using namespace std;

int main (){

    //defining an array with the size of 3
    // initializing if with 3 int values

    int scores[3]= {72, 73, 33};
    int sum =0;
    for (int i =0; i<3; i++)
        sum += scores[i];
    cout << sum /3 << endl;
    return 0;

}
// outputs 59