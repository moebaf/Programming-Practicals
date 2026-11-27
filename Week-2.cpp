#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    // QUESTION: Declare variables for student name, course, three scores, total, average and percentage.
    // ANSWER: string stores text, int stores whole numbers, and double stores decimals.

    string studentName;
    string course;

    int score1, score2, score3;
    int totalScore;

    double average;
    double percentage;

    // QUESTION: Declare a constant for the maximum score.
    // ANSWER: A constant is a value that cannot be changed.

    const int MAX_SCORE = 100;

    // QUESTION: Display a welcome message.
    // ANSWER: cout displays text on the screen.

    cout << "========================================" << endl;
    cout << " STUDENT SCORE CALCULATOR" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // QUESTION 1: Ask for the student's name.
    // ANSWER: getline reads the full name, including spaces.

    cout << "Enter student name: ";
    getline(cin, studentName);

    // QUESTION 2: Ask for the student's course.
    // ANSWER: getline reads and stores the course.

    cout << "Enter course (BBIT/BCS): ";
    getline(cin, course);

    // QUESTION 3: Ask for three test scores.
    // ANSWER: cin >> reads numbers from the user.

    cout << "Enter score for Test 1: ";
    cin >> score1;

    cout << "Enter score for Test 2: ";
    cin >> score2;

    cout << "Enter score for Test 3: ";
    cin >> score3;

    // QUESTION: Calculate the total score.
    // ANSWER: Add the three test scores together.

    totalScore = score1 + score2 + score3;

    // QUESTION: Calculate the average.
    // ANSWER: Divide the total score by 3.0.

    average = totalScore / 3.0;

    // QUESTION: Calculate the percentage.
    // ANSWER: Divide the total by 300 and multiply by 100.

    percentage = (totalScore / 300.0) * 100;

    // QUESTION: Display the student's report card.
    // ANSWER: cout displays the student's details and results.

    cout << endl;
    cout << "========================================" << endl;
    cout << " REPORT CARD" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "Student: " << studentName << endl;
    cout << "Course: " << course << endl;
    cout << endl;

    cout << "Test 1: " << score1 << "/" << MAX_SCORE << endl;
    cout << "Test 2: " << score2 << "/" << MAX_SCORE << endl;
    cout << "Test 3: " << score3 << "/" << MAX_SCORE << endl;
    cout << endl;

    cout << "Total: " << totalScore << "/300" << endl;
    cout << "Average: " << fixed << setprecision(2) << average << endl;
    cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
    cout << endl;

    // QUESTION: Check if the student has passed or failed.
    // ANSWER: If the percentage is 50 or more, the student passes. Otherwise, they fail.

    if (percentage >= 50) {
        cout << "Result: PASS" << endl;
    } else {
        cout << "Result: FAIL" << endl;
    }

    cout << "========================================" << endl;

    return 0;
}

// QUESTION 1: Why did we use double for average but int for scores?
// ANSWER: Average can have decimals, but scores are whole numbers.

// QUESTION 2: What happens if you use / 3 instead of / 3.0?
// ANSWER: The decimal part may be removed.

// QUESTION 3: Why is getline better than cin >> for student names?
// ANSWER: getline reads the full name, including spaces.

// QUESTION 4: What error occurs if you forget a semicolon?
// ANSWER: The compiler shows an error.

// QUESTION 5: Which data type would you use to store a phone number? Why?
// ANSWER: string, because phone numbers may contain + signs and leading zeros.