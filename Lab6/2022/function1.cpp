#include <iostream>
using namespace std;

//Function definition of displayMessage()
void displayMessage()
{
   cout << "Hello from the function displayMessage.\n";
}

int main()
{
   cout << "Hello from main.\n";
   displayMessage(); //function call statement
   cout << "Back in function main again.\n";
   
   return 0;
} 