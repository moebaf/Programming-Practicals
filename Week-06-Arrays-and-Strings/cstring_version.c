
// ============================================================
// ACTIVITY 3: WORKING WITH C-STYLE STRINGS (C VERSION)
// Learning Outcome: Use string handling functions in C
// ============================================================

#include <stdio.h>
#include <string.h>

int main() {

    // Declare a character array to store the name
    char name[50];

    // Ask the user to enter their name
    printf("Enter your name: ");

    // Read the full name, including spaces
    fgets(name, sizeof(name), stdin);

    // Remove the newline character added by fgets
    name[strcspn(name, "\n")] = '\0';

    // Display the entered name
    printf("\nName: %s\n", name);

    // Calculate and display the length of the name
    printf("Length: %zu\n", strlen(name));

    // Display the first character
    printf("First character: %c\n", name[0]);

    // Copy the name into another character array
    char copy[50];
    strcpy(copy, name);

    // Display the copied name
    printf("Copy: %s\n", copy);

    return 0;
}
