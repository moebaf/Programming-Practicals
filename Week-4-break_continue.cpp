// ============================================================
// ACTIVITY 2: BREAK AND CONTINUE IN LOOPS
// Learning Outcome: Analyse break and continue statements
// ============================================================

// Include the input/output library
#include <iostream>

// Use the standard namespace
using namespace std;

// The main function
int main() {

    // Display a header
    cout << "Number filter: Skip multiples of 3, stop at 15" << endl;

    // Start a for loop from 1 to 20
    for (int i = 1; i <= 20; i++) {

        // If i is exactly 15, stop the loop
        if (i == 15) {

            cout << "Breaking at " << i << "!" << endl;

            // Exit the loop
            break;
        }

        // If i is divisible by 3, skip it
        if (i % 3 == 0) {

            // Skip the current iteration
            continue;
        }

        // Display numbers that are not multiples of 3
        cout << i << " ";

    }

    // Move to a new line
    cout << endl;

    return 0;
}

// QUESTION 1: What would happen if you removed the break statement?
// ANSWER: The loop would continue up to 20 instead of stopping at 15.

// QUESTION 2: What would happen if you removed the continue statement?
// ANSWER: Multiples of 3 would also be printed.

// QUESTION 3: What if the condition was i == 10 instead of i == 15?
// ANSWER: The loop would stop when it reaches 10.