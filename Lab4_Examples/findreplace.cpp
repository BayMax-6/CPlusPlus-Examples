/*
    name: addison goforth
    date: 9/20/23
    purpose: demonstrating find and replace functions

*/

#include <iostream>
#include <string>
using namespace std; 

int main() {
    string sentence = "The quick brown fox jumps over the lazy dog.";

    // Find the position of the word "fox" in the sentence
    size_t found = sentence.find("fox");

    if (found != string::npos) {
        cout << "Found 'fox' at position: " << found << endl;

        // Replace "fox" with "cat"
        sentence.replace(found, 3, "cat");

        cout << "Modified sentence: " << sentence << endl;
    } else {
        cout << "'fox' not found in the sentence." << endl;
    }

    return 0;
}
