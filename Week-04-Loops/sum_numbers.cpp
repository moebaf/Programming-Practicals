// ============================================================
// ACTIVITY 1: SUM OF FIRST N NATURAL NUMBERS
// Learning Outcome: Apply a for loop to iterate over a range
// ============================================================

// Include the input/output library so we can use cin and cout
#include <iostream>

// Use the standard namespace so we can write cout instead of std::cout
using namespace std;

// The main function - where the program starts
int main() {

    // Declare an integer variable to store the user's input
    int n;

    // Declare an integer variable to store the running total
    int sum = 0;

    // Ask the user to enter a number
    cout << "Enter a positive number (N): ";
    cin >> n;

    // Start a for loop from 1 to n
    for (int i = 1; i <= n; i++) {

        // Add the current value of i to the running total
        sum += i;

    }

    // Display the final result
    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}