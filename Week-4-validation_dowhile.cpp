#include <iostream>

// Use the standard namespace
using namespace std;

// The main function
int main() {

    // Declare an integer variable
    int number;

    // Ask for a positive number
    cout << "Enter a positive number: ";

    // Read the first input before the loop
    cin >> number;

    // While loop checks the condition before executing
    while (number <= 0) {

        // Display an error message
        cout << "Invalid! Please enter a positive number: ";

        // Read a new input
        cin >> number;

    }

    // Display the valid number
    cout << "You entered: " << number << endl;

    return 0;
}

// QUESTION 1: Which version has less code duplication? Why?
// ANSWER: The do-while version because input is written only once.

// QUESTION 2: Which version is easier to read? Why?
// ANSWER: The do-while version because the input is inside one loop.

// QUESTION 3: Which version would you choose for input validation? Justify your answer.
// ANSWER: I would choose do-while because it asks for input at least once.

// QUESTION 4: What happens in the while version if the user enters a valid number on the first try? Does the loop body ever run?
// ANSWER: The number is accepted immediately. The loop body does not run.