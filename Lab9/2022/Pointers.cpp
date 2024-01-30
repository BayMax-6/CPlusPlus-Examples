/*
Author: Revel Etheridge **(Only Author)**
Title: Pointers.cpp
Purpose: Cover the basics of pointers by the Chum Bucket hosting a raffle
*/

//NOTE: This sample program uses pointer notation

#include <iostream>
#include <cstdlib>
using namespace std;

//Function prototypes
void getNames(string*, int);
void findWinner(string*, int*, int*, int);

int main()
{
    //Variable declarations
    int numCustomers;
    int winningCustomer;
    int winnerIndex;
    int prizeMoney;
    string *customers = NULL;
    srand(time(0));

    //getting number of raffle entries
    cout << "\nWelcome to the Chum Bucket, we swear it's chicken!" << endl;
    cout << "\nHow many customers entered the raffel?   ";
    cin >> numCustomers;

    //dynamically allocating customer array
    customers = new string[numCustomers];

    //getting customer names
    getNames(customers, numCustomers);

    //finding winner and their prize
    findWinner(customers, &winnerIndex ,&prizeMoney, numCustomers);

    //printing results
    cout << "\nThe winner of the raffle is " << customers[winnerIndex - 1] << ", and they won " << prizeMoney << endl;

    //deletion of dynamics
    delete [] customers;

    return 0;
}

//Function to get names of all participating customers
void getNames(string* customers, int numCustomers)
{
    //for loop for name input
    cin.ignore();
    for(int i = 0; i < numCustomers; i++)
    {
        cout << "\nPlease enter the name of customer " << i + 1 << ": ";
        //pointer notation for string input
        getline(cin, *(customers+i));
    }
}

//Function to find the winning customer and their prize
void findWinner(string* customers,int* winnerIndex, int* prizeMoney, int numCustomers)
{
    //dereference pointers to change value instead of address

    //finding the winning customer
    *winnerIndex = (rand() % numCustomers);

    //calculating prize money
    *prizeMoney = (rand() % 100000) + 10000;

}