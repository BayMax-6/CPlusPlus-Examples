/*
    Name: Addison Goforth
    Date:2/21
    Purpose: Teaching nested loops/ continue and break statements
    Files: break.cpp
*/

#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i <= 10; i++)
    {
        if(i % 2 == 0) //what happens if I change this to a != ? 
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}