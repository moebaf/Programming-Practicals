// ============================================================
// ACTIVITY 4: MULTIPLICATION TABLE USING NESTED LOOPS
// Learning Outcome: Create a nested loop structure
// ============================================================

// Include the input/output library
#include <iostream>

// Include the iomanip library for setw
#include <iomanip>

// Use the standard namespace
using namespace std;

// The main function
int main() {

    // Display a title
    cout << "========================================" << endl;
    cout << " MULTIPLICATION TABLE (1 to 10)" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // OUTER LOOP: Controls the rows
    for (int i = 1; i <= 10; i++) {

        // INNER LOOP: Controls the columns
        for (int j = 1; j <= 10; j++) {

            // Display the product with a field width of 5
            cout << setw(5) << i * j;

        }

        // Move to the next line after each row
        cout << endl;

    }

    // Display a closing line
    cout << "========================================" << endl;

    return 0;
}