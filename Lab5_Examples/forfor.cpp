/*
    Name: Addison Goforth
    Date: 2/21
    Purpose: Teaching nested loops
    Files: forfor.cpp

*/


#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";   
        }
        cout << endl;
    }
}