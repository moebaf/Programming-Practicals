// ========================================================
// PROGRAM 9: RIDE ELIGIBILITY (C VERSION)
// Demonstrates logical operators
// ========================================================

#include <stdio.h>

int main() {
    int age;
    int height;
    int hasAdult;
    int medicalClearance;
    int hasVipPass;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in inches: ");
    scanf("%d", &height);

    printf("Are you accompanied by an adult? (1 = yes, 0 = no): ");
    scanf("%d", &hasAdult);

    printf("Do you have medical clearance? (1 = yes, 0 = no): ");
    scanf("%d", &medicalClearance);

    printf("Do you have a VIP pass? (1 = yes, 0 = no): ");
    scanf("%d", &hasVipPass);

    int canRide = (height >= 48) &&
                  (age >= 12 || hasAdult) &&
                  (age <= 65 || medicalClearance) ||
                  hasVipPass;

    if (canRide) {
        printf("You are eligible to ride!\n");
    } else {
        printf("Sorry, you are not eligible to ride.\n");
    }

    return 0;
}