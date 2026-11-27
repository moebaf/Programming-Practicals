
// ============================================================
// ACTIVITY 3A: WORKING WITH C-STYLE STRINGS (C++ VERSION)
// Learning Outcome: Use C-style string handling functions
// ============================================================

#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // Declare a character array to store the name
    char name[50];

    // Ask the user to enter their name
    cout << "Enter your name: ";

    // Read the full name, including spaces
    cin.getline(name, 50);

    // Display the entered name
    cout << "\nName: " << name << endl;

    // Calculate and display the length
    cout << "Length: " << strlen(name) << endl;

    // Display the first character
    cout << "First character: " << name[0] << endl;

    // Copy the name into another character array
    char copy[50];
    strcpy(copy, name);

    // Display the copied name
    cout << "Copy: " << copy << endl;

    return 0;
}
