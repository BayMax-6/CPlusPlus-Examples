#include <iostream>
#include <string> 
#include <cctype>
using namespace std;

int main()
{
	string rock1, rock2, rock3;
		
	cout << "\n\nWhat is your top three favorite colors for rocks?";
	cout << "\nRock 1: ";
	getline(cin, rock1);
	cout << "Rock 2: ";
	getline(cin, rock2);
	cout << "Rock 3: ";
	getline(cin, rock3);
	
	//capitalize first letter of all the color of the rocks 
	rock1.at(0) = toupper(rock1.at(0));
	rock2.at(0) = toupper(rock2.at(0));
	rock3.at(0) = toupper(rock3.at(0));

	cout << "\nRock 1: " << rock1; 
	cout << "\nRock 2: " << rock2;
	cout << "\nRock 3: " << rock3;
	cout << endl; 

    return 0; 
}