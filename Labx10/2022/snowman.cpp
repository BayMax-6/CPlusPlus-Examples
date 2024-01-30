/*
    name: Addison Goforth
    date: Updates 11/15
    purpose: Example of Memory Allocation
    file name: snowman.cpp

*/


#include <iostream>
#include <string>

using namespace std; 

struct SnowmanParts {
    string name;
    string description;
};

int main() {
    // Get the number of snowman parts from the user
    int numParts;
    cout << "Enter the number of snowman parts: ";
    cin >> numParts;

    // Dynamically allocate memory for an array of SnowmanParts structures
    SnowmanParts* snowmanArray = new SnowmanParts[numParts];

    // Initialize the array with Christmas themed snowman parts
    for (int i = 0; i < numParts; ++i) {
        cout << "Enter the name of snowman part " << i + 1 << ": ";
        cin >> snowmanArray[i].name;
        cout << "Enter a description for " << snowmanArray[i].name << ": ";
        cin.ignore(); // Clear the newline character from the input buffer
        getline(cin, snowmanArray[i].description);
    }

    // Display the Christmas-themed snowman parts
    std::cout << "\nYour Christmas-themed snowman parts:\n";
    for (int i = 0; i < numParts; ++i) {
        cout << snowmanArray[i].name << ": " << snowmanArray[i].description << "\n";
    }

    // Don't forget to deallocate the memory to avoid memory leaks
    delete[] snowmanArray;

    return 0;
}

