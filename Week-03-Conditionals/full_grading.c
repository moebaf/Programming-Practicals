// ========================================================
// PROGRAM 8: FULL GRADING SYSTEM (C VERSION)
// Demonstrates conditionals, strings, and switch-case
// ========================================================

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char grade;
    double score;

    // Get student's name
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character
    name[strcspn(name, "\n")] = '\0';

    // Get student's score
    printf("Enter percentage score (0-100): ");
    scanf("%lf", &score);

    // Validate the score
    if (score < 0 || score > 100) {
        printf("Invalid score. Enter a score between 0 and 100.\n");
        return 1;
    }

    // Determine the letter grade
    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        grade = 'B';
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Display the student's report
    printf("\n===== STUDENT GRADE REPORT =====\n");
    printf("Student Name: %s\n", name);
    printf("Percentage: %.2f%%\n", score);
    printf("Letter Grade: %c\n", grade);

    // Display recommendations based on grade
    printf("\n===== RECOMMENDATIONS =====\n");

    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            printf("- Become a peer tutor.\n");
            printf("- Explore advanced topics.\n");
            break;

        case 'B':
            printf("Good performance!\n");
            printf("- Review topics where you lost points.\n");
            printf("- Continue practising.\n");
            break;

        case 'C':
            printf("Average performance.\n");
            printf("- Attend office hours.\n");
            printf("- Join a study group.\n");
            break;

        case 'D':
        case 'F':
            printf("You need additional support.\n");
            printf("- Attend mandatory tutoring.\n");
            printf("- Speak with an academic advisor.\n");
            break;
    }

    return 0;
}