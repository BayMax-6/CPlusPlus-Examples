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


/*
 * This is the utility function that takes an integar n and
 * returns the summation of 1 to n using a loop.
 */
unsigned int Sum(int n)
{  
   int sum = 0;
   //cout << n<< endl;
   if ( n <= 0 ) {
      cout << "Invaild value.";
   }
   else{
      int i = 1;
      while (i <= n){
         sum = sum +i;
         i++;
      }
      cout << "\nThe summation from 1 to " << n << " is: " << sum << endl;
   }
   return 0;

}
/*
 * This is the utility function that takes an integar n and
 * returns the Factorial of n.*/
 
unsigned long long Factorial(int n)
{
    // Write your code here to get this function to work
    unsigned long long factorial = 1;
	
	for (int i = 1;i <= n; i++) {
		factorial *= i;
	}
	cout << "Factorial of " <<  n << " = " << factorial << endl;
	return 0;
}

/*
 * This is the utility function that takes an integar n and
 * displays the times table of n.
 */
void TimesTable(int n)
{
    int i = 0;

    cout << "The times table for " << n << " is as follows:\n" << endl;

    for (int i = 1; i <= 10; ++i) {
        cout << i << " * " << n << " = " << n * i << endl;
    }

}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for even number including zero) or
 * a false (for odd number).*/
 
bool IsEven(int n)
{
    
    if (n % 2 == 0){
        cout << n << " is an even number." << endl;
    } else {
        cout << n << " is an odd number." << endl;
    }
    return 0;
}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for a prime number) or
 * a false (for a non-prime number).*/
 
bool IsPrime(int n)
{
    int i = 0;
    bool IsPrime = true;
    
    if (n == 0 || n == 1 ){
        IsPrime= false;
    }
    else {
        for (i = 2; i <= n/2; ++i ){
            if (n % 1 == 0){
                IsPrime=false;
                break;
            }
        }
        if (IsPrime)
            cout << n << " is a prime number."<< endl;
        else 
            cout << n << " is not a prime number."<< endl;
    
    }
    return 0;
}

/*
 * This is the utility function that takes an integar n and
 * return either a true (for an Armstrong Number) or
 * a false (for a Non-Armstrong Number).*/
 
 bool IsArmstrongNumber(int num)
{
    // Write your code here to get this function to work

   int originalNum = 0, remainder, n = 0, result = 0, power = 0;
   originalNum = num;

   while (originalNum != 0) {
      originalNum /= 10;
      ++n;
   }
   originalNum = num;

   while (originalNum != 0) {
      remainder = originalNum % 10;

      // pow() returns a double value
      // round() returns the equivalent int
      power = round(pow(remainder, n));
      result += power;
      originalNum /= 10;
   }

   if (result == num)
      cout << num << " is an Armstrong number." << endl;
        if (result != num)
            cout << num << " is not an Armstrong number." << endl;
   
   return 0;
   
}
