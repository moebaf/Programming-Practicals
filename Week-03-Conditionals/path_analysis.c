// ========================================================
// PROGRAM 10: PATH ANALYSIS (C VERSION)
// Demonstrates nested conditional statements
// ========================================================

#include <stdio.h>

int main() {
    int choice;
    int subChoice;

    printf("===== PATH ANALYSIS =====\n");
    printf("1. Education\n");
    printf("2. Career\n");
    printf("3. Personal Development\n");
    printf("Choose a path: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\n1. Computer Science\n");
        printf("2. Information Technology\n");
        printf("Choose a course: ");
        scanf("%d", &subChoice);

        if (subChoice == 1) {
            printf("You chose Computer Science.\n");
        } else if (subChoice == 2) {
            printf("You chose Information Technology.\n");
        } else {
            printf("Invalid course choice.\n");
        }

    } else if (choice == 2) {
        printf("\n1. Software Developer\n");
        printf("2. Network Administrator\n");
        printf("Choose a career: ");
        scanf("%d", &subChoice);

        if (subChoice == 1) {
            printf("You chose Software Developer.\n");
        } else if (subChoice == 2) {
            printf("You chose Network Administrator.\n");
        } else {
            printf("Invalid career choice.\n");
        }

    } else if (choice == 3) {
        printf("\n1. Learn a Language\n");
        printf("2. Learn a Skill\n");
        printf("Choose an option: ");
        scanf("%d", &subChoice);

        if (subChoice == 1) {
            printf("You chose to learn a language.\n");
        } else if (subChoice == 2) {
            printf("You chose to learn a skill.\n");
        } else {
            printf("Invalid option.\n");
        }

    } else {
        printf("Invalid path choice.\n");
    }

    return 0;
}