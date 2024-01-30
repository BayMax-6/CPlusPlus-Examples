/*
    name: Addison Goforth
    date: Updates 11/15
    purpose: Example of Structures
    file name: structures.cpp

*/

#include <iostream>
#include <string>

using namespace std;

// Define a structure for an apple
struct Apple {
    string color;
    double weight;  // in grams
};

// Define a structure for an orange
struct Orange {
    string variety;
    double diameter;  // in centimeters
};

int main() {
    // Create an apple
    Apple myApple;
    myApple.color = "Red";
    myApple.weight = 150.0;

    // Create an orange
    Orange myOrange = {"Navel", 8.5};

    // Display information about the apple
    cout << "Apple Color: " << myApple.color << "\n";
    cout << "Apple Weight: " << myApple.weight << " grams\n";

    // Display information about the orange
    cout << "Orange Variety: " << myOrange.variety << "\n";
    cout << "Orange Diameter: " << myOrange.diameter << " centimeters\n";

    return 0;
}

