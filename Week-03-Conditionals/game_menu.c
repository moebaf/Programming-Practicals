// ========================================================
// PROGRAM 7: GAME MENU (C VERSION)
// Demonstrates switch-case fall-through
// ========================================================

#include <stdio.h>

int main() {
    int choice;

    printf("===== GAME MENU =====\n");
    printf("1. Start Game\n");
    printf("2. Instructions\n");
    printf("3. High Scores\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Starting game...\n");
            break;
        case 2:
            printf("Showing instructions...\n");
            break;
        case 3:
            printf("Displaying high scores...\n");
            break;
        case 4:
            printf("Exiting game. Goodbye!\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}