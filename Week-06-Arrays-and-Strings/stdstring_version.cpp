
// ============================================================
// ACTIVITY 3B: WORKING WITH STANDARD C++ STRINGS
// Learning Outcome: Use the C++ string class
// ============================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

    // Declare a string variable to store the name
    string name;

    // Ask the user to enter their name
    cout << "Enter your name: ";

    // Read the full name, including spaces
    getline(cin, name);

    // Display the entered name
    cout << "\nName: " << name << endl;

    // Calculate and display the length
    cout << "Length: " << name.length() << endl;

    // Display the first character if the name is not empty
    if (!name.empty()) {
        cout << "First character: " << name[0] << endl;
    }

    // Copy the name into another string
    string copy = name;

    // Display the copied name
    cout << "Copy: " << copy << endl;

    // Display a greeting using string concatenation
    cout << "Greeting: Hello, " + name + "!" << endl;

    return 0;
}
