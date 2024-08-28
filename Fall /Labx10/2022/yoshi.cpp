/*
    name: Addison Goforth
    date: Updates 11/15
    purpose: Example of Array of pointers, Structures, and Memory Allocation
    file name: yoshi.cpp

*/

#include <iostream>
#include <string>

using namespace std; 

// Define a structure for a Mario Kart character
struct MarioKartCharacter {
    string name;
    string vehicle;
    int speed;  // Speed level from 1 to 10
};

int main() {
    const int numCharacters = 3;

    // Create an array of pointers to MarioKartCharacter structures
    MarioKartCharacter* characters[numCharacters];

    // Dynamically allocate memory for each MarioKartCharacter
    characters[0] = new MarioKartCharacter{"Yoshi", "Standard Kart", 5};
    characters[1] = new MarioKartCharacter{"Birdo", "Mach 8", 6};
    characters[2] = new MarioKartCharacter{"Princess Peach", "Circuit Special", 7};

    // Display information about each Mario Kart character *pointer notation 
    cout << "Mario Kart Characters:\n";
    for (int i = 0; i < numCharacters; ++i) {
        cout << "Character: " << characters[i] -> name << "\n";
        cout << "Vehicle: " << characters[i] -> vehicle << "\n";
        cout << "Speed: " << characters[i] -> speed << "/10\n\n";
    }

    // Deallocate memory for each MarioKartCharacter
    for (int i = 0; i < numCharacters; ++i) {
        delete characters[i];
    }

    return 0;
}