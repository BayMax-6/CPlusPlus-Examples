#include <iostream>
using namespace std;

//function prototype
void displayMessage();

int main()
{
   cout << "Hello from main.\n";
   displayMessage(); //function call statement
   cout << "Back in function main again.\n";
   
   return 0;
} 

void displayMessage()
{
   cout << "Hello from the function displayMessage.\n";
}