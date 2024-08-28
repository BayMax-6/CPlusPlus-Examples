/*
    name: Addison Goforth
    Date: 8/28/23
    purpose: Debugging Example
    files: labA.cpp
*/

#include <iostream> 
#include <iomanip>
using namespace std;

int main(){

	double quotient = 132.36485967;
	
	cout << setprecision(1) << fixed << quotient << endl;

	cout << quotient << endl;
	cout << setprecision(5) << quotient << endl;
	cout << setprecision(4) << quotient << endl;
	cout << setprecision(3) << quotient << endl;
	cout << setprecision(2) << quotient << endl;
	cout << setprecision(1) << quotient << endl;

	return 0;
}