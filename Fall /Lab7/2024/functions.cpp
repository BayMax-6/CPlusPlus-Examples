/*
    name: Addison Goforth
    date: 3/623
    purpose: to teach headerfiles 
    files: Driver.cpp functions.cpp headerFile.h
*/

#include "headerFile.h"

void addingNumbers(int num1, int num2, int num3){
    int sumNum= 0; 

    sumNum = num1 + num2 + num3; 

    cout << "The answer is........"; 
    cout << sumNum << endl; 

} 

void subtractingNumbers(int num1, int num2, int num3){

    int subtractNum = 0; 

    subtractNum = num3 - num2 - num1; 

    cout << "The answer is........"; 
    cout << subtractNum << endl; 
} 

void multiplyNumbers(int num1, int num2, int num3){

    int multiplyNum = 0; 

    multiplyNum = num1 * num2 * num3; 

    cout << "The answer is........"; 
    cout << multiplyNum << endl; 
}