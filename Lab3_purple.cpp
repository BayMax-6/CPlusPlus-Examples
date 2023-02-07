/*
    Name: Addison Goforth
    Date: 2/6
    Purpose: Teaching if else statements
    Files: Lab3_purple.cpp
*/


#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime> 
using namespace std; 


int main(){

    string lineofStars(79,'*');
    string name1, name2, name3, car1, car2, car3; 
    double years; 
    int num1, num2, num3, outof3; 


    srand(time(0));
    cout << fixed << setprecision(2); 



    cout << lineofStars << "\n\t\t\tKrusty Krab Krew Work Schedule\n" << lineofStars << endl; 
    cout << "\nEnter in the information that is asked below and I the magic conch will determine "
         << "your fate.\nThis will include your co-workers, years of youth gone, wages, and what you will drive. "<< endl; 
        

    cout << "\n\t\tThis first part will be you entering names of people you'd work with.\n "<< endl; 

    cout << "First person you'd like to work with: "; 
    getline(cin, name1);
    cout << endl; 

    cout << "Second person you'd like to work with: "; 
    getline(cin, name2);
    cout << endl; 

    cout << "The person you'd hate to work with: "; 
    getline(cin, name3);
    cout << endl; 

    cout << "\n\t\tThis second part you will be entering cars that you'd like to have.\n "<< endl; 

    cout << "First car option: "; 
    getline(cin, car1);
    cout << endl; 

    cout << "Second car option: "; 
    getline(cin, car2);
    cout << endl; 

    cout << "Piece of junk that you will never want: "; 
    getline(cin, car3);
    cout << endl; 


    cout << "pick a number 1 through 45: "; 
    cin >> num1; 

    years = rand()%(50-1+1)+1; // generates a number 1 - 50
    num2 = num1 *10000.00 * (rand()%(10-1+1)+1); 


    if(num1 >= 20)
		outof3 = 1;
	else if(num1 > 7)
		outof3 = 2;
	else
		outof3 = 3;


    cout << endl << lineofStars << "\n\nYou will work with ";
	
	switch(outof3)
	{
		case 1: cout << name1 << ". Having " << years << " years of your youthful life lost. While making $"
					 << num2 << " per year \nand driving the best "
					 << car1 << " to the krusty crab. \n";
				break;
				
		case 2: cout << name2 << ". Having " << years << " years of your youthful life lost. While making $"
					 << num2 << " per year \nand driving the not so great "
					 << car2 << " to the krusty crab. \n";
				break;
		
		case 3: cout << name1 << ". Having " << years << " years of your youthful life lost. While making $"
					 << num2 << " per year \nand driving the crappy  "
					 << car1 << " to the krusty crab. \n";
				break;
	}
	
	cout << endl << lineofStars << endl;

return 0; 
}