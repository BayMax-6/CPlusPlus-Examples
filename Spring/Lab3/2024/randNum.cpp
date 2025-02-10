/*
    name: Addison Goforth 
    date: 2/10/2024
    purpose: Random Number Gen. Example :) 
*/

#include <iostream>
#include <ctime> // HEY CHECKOUT THIS NEEEEWWW LIBRARY!!

using namespace std;

int main() {
    
    //declaring all our variabels for the program
    int randomNumber = 0, userGuess = 0;
    char letter = 'N';

    //why do you think we need to 'seed' this with 'time'
    srand(time(0));

    //what do we think this is going to do?
    randomNumber = '1' + rand() % 26;  

    // Prompt the user for a guess
    cout << "Guess a number: ";
    cin >> userGuess;

    cout << "Random Number: "<< randomNumber << endl; 


    // Convert user input to uppercase to make the game case-insensitive
   if (randomNumber == userGuess){
    cout << "You guessed the correct number! Good job! \n";
   }
   else {
    cout << "You guessed the incorrect number! Bad job! \n";

    //what is this going to do? 
    randomNumber = toupper(randomNumber); 
    cout << randomNumber; 
   }

    return 0;
}
