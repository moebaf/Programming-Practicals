// ========================================================
// PROGRAM 4: MOVIE ELIGIBILITY AND DISCOUNT (C VERSION)
// Demonstrates logical operators: &&, ||
// ========================================================

#include <stdio.h>

int main() {
    int age;
    int hasParentalConsent;
    int isWeekend;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have parental consent? (1 = yes, 0 = no): ");
    scanf("%d", &hasParentalConsent);

    printf("Is it the weekend? (1 = yes, 0 = no): ");
    scanf("%d", &isWeekend);

    int canWatchMovie = (age >= 18) ||
                        (age >= 13 && hasParentalConsent) ||
                        (isWeekend && age >= 10);

    if (canWatchMovie) {
        printf("You can watch the movie!\n");
    } else {
        printf("Sorry, you cannot watch the movie.\n");
    }

    int eligibleForDiscount = (age >= 65) ||
                              (age <= 12) ||
                              (isWeekend && age <= 18);

    if (eligibleForDiscount) {
        printf("You are eligible for a discount!\n");
    }

    return 0;
}