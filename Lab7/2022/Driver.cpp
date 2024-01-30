/*
    name: Addison Goforth
    date: 3/623
    purpose: to teach headerfiles 
    files: Driver.cpp functions.cpp headerFile.h
*/

#include <iostream> 
#include <cmath> 
#include "headerFile.h"

using namespace std; 

int main(){

    int userOperation = 0, num1 = 0, num2 =0, num3 = 0; 
    

    cout<< "Welcome to math!"; 
    cout << "\nHere math still doesn't make sense, but it's close enough!"<< endl; 
    do{
    cout<< "Please choose from the menu options below." <<
            "\n1. Adding three numbers"<<
            "\n2. Subtracting threen numbers"<<
            "\n3. Multiplying three numbers"<<
            "\n4. I'm tired of numbers\n"; 
        
    cin >> userOperation; 
    while (userOperation > 4 || userOperation < 0){
        cout << "That was not one of the options. "; 
        cout << "\nPlease try again: "; 
        cin >> userOperation; 
    }

    
    switch(userOperation){
            case 1: 
                    cout << "Please enter in the first number: "; 
                    cin >> num1;
                    cout << "Please enter in the second number: "; 
                    cin >> num2;
                    cout << "Please enter in the third number: "; 
                    cin >> num3; 

                    addingNumbers(num1, num2, num3); 
                    break; 
            
            case 2: 
                    cout << "Please enter in the first number: "; 
                    cin >> num1;
                    cout << "Please enter in the second number: "; 
                    cin >> num2;
                    cout << "Please enter in the third number: "; 
                    cin >> num3;

                    subtractingNumbers(num1, num2, num3); 
                    break;

            case 3: 
                    cout << "Please enter in the first number: "; 
                    cin >> num1;
                    cout << "Please enter in the second number: "; 
                    cin >> num2;
                    cout << "Please enter in the third number: "; 
                    cin >> num3;

                    multiplyNumbers(num1, num2, num3); 
                    break;

            case 4: 
                    cout << "Program as ended! Thanks for playing with numbers!\n ";
                    break; 
                   
            default: 
                    cout<< "Um you messed up somewhere.\n"; 
                    break;

    }
    } while( userOperation != 4);




    return 0; 
}