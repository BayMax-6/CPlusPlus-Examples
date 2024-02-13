/*
    Name: April Crockett Modified by Addison Goforth
    Date: 2/12/24
    Purpose: Teaching do while loops and Explaining already given example code
    Files: doWhile.cpp
*/

#include <iostream> 
using namespace std; 

int main()
{
	double score1, score2, score3; // Three scores
	double average;             // Average score
	char again;                 // To hold Y or N input

	do
	{
		// Get three scores.
		cout << "Enter 3 scores and I will average them: ";
		cin >> score1 >> score2 >> score3;

		// Calculate and display the average.
		average = (score1 + score2 + score3) / 3.0;
		cout << "The average is " << average << ".\n";

		// Does the user want to average another set?
		cout << "Do you want to average another set? (Y/N) ";
		cin >> again;
	} while (again == 'Y' || again == 'y');
	
	return 0;
}

