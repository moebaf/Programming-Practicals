
// ============================================================
// ACTIVITY 1: LINEAR SEARCH IN AN INTEGER ARRAY (C++ VERSION)
// Learning Outcome: Apply linear search
// ============================================================

#include <iostream>
using namespace std;

// Function to search for a target value in an array
int linearSearch(int arr[], int size, int target) {

    // Loop through each element in the array
    for (int i = 0; i < size; i++) {

        // Compare the current element with the target
        if (arr[i] == target) {

            // Return the index if found
            return i;
        }
    }

    // Return -1 if the target is not found
    return -1;
}

int main() {

    // Declare and initialise an array of 8 integers
    int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};

    // Calculate the number of elements in the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Variable to store the target number
    int target;

    // Display the array contents
    cout << "Array contents: ";

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    // Ask the user for a number to search
    cout << "Enter a number to search: ";
    cin >> target;

    // Call the linearSearch function
    int position = linearSearch(numbers, size, target);

    // Display the search result
    if (position != -1) {
        cout << "Element found at index: " << position << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
