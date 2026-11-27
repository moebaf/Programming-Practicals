
// ============================================================
// ACTIVITY 4: STUDENT SCORE ANALYZER (C++ VERSION)
// Learning Outcome: Use arrays and functions to analyse scores
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

#define SIZE 10

// Function to calculate the average score
double calculateAverage(int scores[], int size) {

    int sum = 0;

    // Add all the scores
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }

    // Return the average
    return (double)sum / size;
}

// Function to display scores above the average
void displayAboveAverage(int scores[], int size, double average) {

    int found = 0;

    cout << "\nScores above average:" << endl;

    // Check each score against the average
    for (int i = 0; i < size; i++) {

        if (scores[i] > average) {
            cout << "Position " << i + 1 << ": "
                 << scores[i] << endl;

            found = 1;
        }
    }

    // Display a message if no score is above average
    if (!found) {
        cout << "None" << endl;
    }
}

int main() {

    // Declare an array to store 10 student scores
    int scores[SIZE];

    // Ask the user to enter 10 scores
    cout << "Enter " << SIZE << " student scores:" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
    }

    // Calculate the average
    double average = calculateAverage(scores, SIZE);

    // Display the average to two decimal places
    cout << fixed << setprecision(2);
    cout << "\nAverage score: " << average << endl;

    // Display all scores above the average
    displayAboveAverage(scores, SIZE, average);

    return 0;
}
