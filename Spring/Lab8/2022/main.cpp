/*
    name: Addison Goforth
    date: 3/28/23
    files: main.cpp functions.cpp headerfile.h
    purpose: The purpose of this program is to perform a set of standard
             math fuctions for a given positive number.
*/


#include "headerfile.h"

// Driver code
int main()
{

    // variables
    int userNum = 0;
    int userInput = 0, n= 0;
    userInput = n;
    // tells the users what the program will do
        cout << "\n\nWelcome to the Standard Math Program." << endl;
        cout << "Given a positive number (n), the program can compute: "<< endl;
        cout << " - Sum from 1 to n" << endl;
        cout << " - Factorial of n" << endl;
        cout << " - Display the times table of n" << endl;
        cout << " - Checks whether n is even or odd" << endl;
        cout << " - Checks whether or not n is a prime number" << endl;
        cout << " - Checks whether or not n is an Armstrong number" << endl;
        // beginning of the do while loop
    do{
        cout << "Please enter positive number (0 to terminate program): ";
        cin >> userInput;

        // outputs the users number based on the functions
       if (userInput>0){
        Sum(userInput);
        cout << endl;

        Factorial(userInput);
        cout << endl;

        TimesTable(userInput);
        cout << endl;

        IsEven(userInput);
        cout << endl;

        IsPrime(userInput);
        cout << endl;

        IsArmstrongNumber(userInput);
        cout << endl;
       }// makes the user input a different number if the number is negative
       else if (userInput <0){
           cout << "Invalid value."<< endl;

       }
        // if the user inputs a 0
        else {
            break;
        }

    
    } while (userInput !=0); // loop also stops if the user inputs a 0
 return 0;

}