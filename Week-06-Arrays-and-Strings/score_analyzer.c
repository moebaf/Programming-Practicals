
// ============================================================
// ACTIVITY 4: STUDENT SCORE ANALYZER (C VERSION)
// Learning Outcome: Use arrays and functions to analyse scores
// ============================================================

#include <stdio.h>

#define SIZE 10

// Function to calculate the average score
double calculateAverage(int scores[], int size) {

    int sum = 0;

    // Add all the scores
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }

    // Return the average as a double
    return (double)sum / size;
}

// Function to display scores above the average
void displayAboveAverage(int scores[], int size, double average) {

    int found = 0;

    printf("\nScores above average:\n");

    // Check each score against the average
    for (int i = 0; i < size; i++) {

        if (scores[i] > average) {
            printf("Position %d: %d\n", i + 1, scores[i]);
            found = 1;
        }
    }

    // Display a message if no score is above average
    if (!found) {
        printf("None\n");
    }
}

int main() {

    // Declare an array to store 10 student scores
    int scores[SIZE];

    // Ask the user to enter 10 scores
    printf("Enter %d student scores:\n", SIZE);

    for (int i = 0; i < SIZE; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Calculate the average
    double average = calculateAverage(scores, SIZE);

    // Display the average
    printf("\nAverage score: %.2f\n", average);

    // Display all scores above the average
    displayAboveAverage(scores, SIZE, average);

    return 0;
}
