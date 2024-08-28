/*
    name: Addison Goforth
    date: Updates 11/15
    purpose: Example of an array of pointers 
    file name: dog.cpp

*/


#include <iostream>
#include <string>

using namespace std;

// Define a structure for a dog
struct Dog {
    string name;
    int age;
};

int main() {
    int numberOfDogs = 3;

    // Create an array of pointers to Dog structures
    Dog* dogArray[numberOfDogs];

    // Create instances of Dog and assign them to the array of pointers
    dogArray[0] = new Dog{"Buddy", 2};
    dogArray[1] = new Dog{"Max", 3};
    dogArray[2] = new Dog{"Charlie", 4};

    // Display information about each dog
    for (int i = 0; i < numberOfDogs; ++i) {
        cout << "Dog " << i + 1 << ":\n";
        cout << "Name: " << dogArray[i]->name << "\n";
        cout << "Age: " << dogArray[i]->age << " years\n\n";
    }

    // Deallocate memory for each dog
    for (int i = 0; i < numberOfDogs; ++i) {
        delete dogArray[i];
    }

    return 0;
}