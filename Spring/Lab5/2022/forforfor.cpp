/*
    what is missing/what is wrong? 
    Purpose: Teaching nested loops

*/


#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i = 5; i++)
    {
        for(int j = 1; j <= 5-i; j+)
        {
            cout << " ";   
        }
        for ( k = 1; k <= i; k++)
        {
            cout << i;
        }
        cout << endl;
    }
}