
// ============================================================
// ACTIVITY 3: RECURSION - TWO FACTORIAL SOLUTIONS
// Learning Outcome: Evaluate recursive solutions
// ============================================================

#include <iostream>
using namespace std;

// FUNCTION 1: factorialRecursive (Simple Recursion)
int factorialRecursive(int n) {
    // Base case
    if (n <= 1) {
        return 1;
    }

    // Recursive case
    return n * factorialRecursive(n - 1);
}

// FUNCTION 2: factorialTail (Tail Recursion)
int factorialTail(int n, int accumulator = 1) {
    // Base case
    if (n <= 1) {
        return accumulator;
    }

    // Tail recursive case
    return factorialTail(n - 1, n * accumulator);
}

// The main function
int main() {
    int num;

    cout << "Enter a number to calculate factorial: ";
    cin >> num;

    // Validate input
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    // Calculate using simple recursion
    cout << "\nUsing simple recursion:" << endl;
    cout << " " << num << "! = " << factorialRecursive(num) << endl;

    // Calculate using tail recursion
    cout << "\nUsing tail recursion:" << endl;
    cout << " " << num << "! = " << factorialTail(num) << endl;

    // Comparison
    cout << "\n--- Comparison ---" << endl;
    cout << "Simple recursion: Clear, matches mathematical definition." << endl;
    cout << "Tail recursion: More efficient for large n (compiler optimization)." << endl;

    return 0;
}
