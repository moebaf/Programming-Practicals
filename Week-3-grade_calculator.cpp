#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double score;
    char grade;
    char modifier = ' '; // Space means no modifier

    cout << "===== GRADE CALCULATOR =====" << endl;
    cout << "Enter percentage score (0-100): ";
    cin >> score;

    // Input validation
    if (score < 0 || score > 100) {
        cout << "Invalid score! Must be between 0 and 100." << endl;
        return 1;
    }

    // Determine base letter grade
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

    // Determine plus/minus modifiers
    // Only for A, B, C, D
    if (grade != 'F') {

        int lastDigit = (int)score % 10;

        if (grade == 'A') {
            if (score >= 97)
                modifier = '+';
            else if (score < 93)
                modifier = '-';

        } else if (grade == 'B' || grade == 'C') {
            if (lastDigit >= 7)
                modifier = '+';
            else if (lastDigit <= 3)
                modifier = '-';

        } else if (grade == 'D') {
            if (lastDigit >= 7)
                modifier = '+';
            else if (lastDigit <= 3)
                modifier = '-';
        }
    }

    // Display result
    cout << "\nScore: " << fixed << setprecision(1) << score << "%" << endl;

    cout << "Grade: " << grade;

    if (modifier != ' ')
        cout << modifier;

    cout << endl;

    return 0;
}

// QUESTION 1: Which version is easier to read? Why?
// ANSWER: The switch version is easier to read because it is organized into separate cases.

// QUESTION 2: Which version is easier to add a new option? Why?
// ANSWER: The switch version because I can easily add another case.

// QUESTION 3: Which version is less prone to errors like forgetting break?
// ANSWER: The if-else version because it does not need break statements.

// QUESTION 4: When would you choose if-else over switch?
// ANSWER: I would use if-else when checking ranges or complex conditions.1
