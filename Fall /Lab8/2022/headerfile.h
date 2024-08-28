/*
    name: Addison Goforth
    date: 3/28/23
    files: main.cpp functions.cpp headerfile.h
    purpose: The purpose of this program is to perform a set of standard
             math fuctions for a given positive number.
*/

#include <iostream>
#include <cmath>
using namespace std;

#ifndef headerfile_h
#define headerfile_h

/*
 * This is the utility function that takes an integar n and
 * returns the summation of 1 to n using a loop.
 * 
 * Example, if the value of n is 10, then the function will
 * return 55 (which is computed from 1+2+3+4+5+6+7+8+9+10).
 */
unsigned int Sum(int n);

/*
 * This is the utility function that takes an integar n and
 * returns the Factorial of n.
 * 
 * Example, if the value of n is 5, then the function will
 * return 12 (which is computed from 1*2*3*4*5).
 */
unsigned long long Factorial(int n);

/*
 * This is the utility function that takes an integar n and
 * displays the times table of n.
 * 
 * Example, if the value of n is 5, then the function will
 * display the following:
 * 1 * 5 = 5
 * 2 * 5 = 10
 * 3 * 5 = 15
 * 4 * 5 = 20
 * 5 * 5 = 25
 * 6 * 5 = 30
 * 7 * 5 = 35
 * 8 * 5 = 40
 * 9 * 5 = 45
 * 10 * 5 = 50
 */
void TimesTable(int n);

/*
 * This is the utility function that takes an integar n and
 * return either a true (for even number including zero) or
 * a false (for odd number).
 * 
 * Example, if the value of n is 15, then the function will
 * return false. If the value of n is 20, then the function
 * will return true.
 */
bool IsEven(int n);

/*
 * This is the utility function that takes an integar n and
 * return either a true (for a prime number) or
 * a false (for a non-prime number).
 * 
 * Prime Number: Numbers that have only 2 factors: 1 and themselves.
 * 
 * Example, if the value of n is 10, then the function will
 * return false. If the value of n is 7, then the function
 * will return true.
 */
bool IsPrime(int n);

/*
 * This is the utility function that takes an integar n and
 * return either a true (for an Armstrong Number) or
 * a false (for a Non-Armstrong Number).
 * 
 * Armstrong Number: The sum of cubes of each digit of the
 * number is equal to the number itself.
 * 
 * Example, if the value of n is 153, then the function will return
 * true because 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).
 * If the value of n is 1634, then function will also return true
 * because 9474 = 9^4 + 4^4 + 7^4 + 4^4.
 * If the value of n is 54748, then function will also return true
 * because 54748 = 5^5 + 4^5 + 7^5 + 4^5 + 8^5.
 *
 * Therefore, A number N is an Armstrong number of order n (n being
 * the number of digits) if
 * abed... = a^n + b^n + c^n + d^n + ... = N.
 */
bool IsArmstrongNumber(int n);

#endif