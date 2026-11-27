
// ============================================================
// STUDENT SCORE CALCULATOR - C VERSION
// This program asks for a student's name, course, and three
// test scores, then calculates and displays a report card.
// ============================================================

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_SCORE 100

int main() {

    // VARIABLE DECLARATIONS
    char studentName[MAX_LEN];
    char course[MAX_LEN];

    int score1, score2, score3;
    int totalScore;

    double average;
    double percentage;

    // WELCOME BANNER
    printf("========================================\n");
    printf(" STUDENT SCORE CALCULATOR\n");
    printf("========================================\n\n");

    // INPUT: STUDENT NAME
    printf("Enter student name: ");
    fgets(studentName, MAX_LEN, stdin);
    studentName[strcspn(studentName, "\n")] = '\0';

    // INPUT: COURSE
    printf("Enter course (BBIT/BCS): ");
    fgets(course, MAX_LEN, stdin);
    course[strcspn(course, "\n")] = '\0';

    // INPUT: TEST SCORES
    printf("Enter score for Test 1: ");
    scanf("%d", &score1);

    printf("Enter score for Test 2: ");
    scanf("%d", &score2);

    printf("Enter score for Test 3: ");
    scanf("%d", &score3);

    // CALCULATIONS
    totalScore = score1 + score2 + score3;
    average = totalScore / 3.0;
    percentage = (totalScore / 300.0) * 100;

    // DISPLAY REPORT CARD
    printf("\n");
    printf("========================================\n");
    printf(" REPORT CARD\n");
    printf("========================================\n\n");

    printf("Student: %s\n", studentName);
    printf("Course: %s\n", course);
    printf("\n");

    printf("Test 1: %d/%d\n", score1, MAX_SCORE);
    printf("Test 2: %d/%d\n", score2, MAX_SCORE);
    printf("Test 3: %d/%d\n", score3, MAX_SCORE);
    printf("\n");

    printf("Total: %d/300\n", totalScore);
    printf("Average: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("\n");

    // DETERMINE PASS OR FAIL
    if (percentage >= 50) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    printf("========================================\n");

    return 0;
}
