
// ============================================================
// ACTIVITY 3: RETURN CODES AND STDERR IN C
// Learning Outcome: Evaluate C error-handling strategies
// ============================================================

#include <stdio.h>
#include <errno.h>   // Required for errno
#include <string.h>  // Required for strerror

// Function that returns a status code (0 for success, 1 for failure)
int readFileWithReturnCode(const char *filename) {

    FILE *file = fopen(filename, "r");

    if (file == NULL) {

        // Instead of throwing an exception, print to stderr.
        // stderr is separate from normal output (stdout).

        // errno stores the error number.
        // strerror converts the error number into readable text.
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));

        // Return 1 to indicate failure.
        return 1;
    }

    // File opened successfully.
    // This is where file-reading operations would take place.

    fclose(file);

    return 0; // Return 0 for success
}

int main() {

    printf("--- Testing Return Code Strategy ---\n");

    // Manually check the return code (1 = failure).
    if (readFileWithReturnCode("data.txt") == 1) {

        printf("Main function: Handled error gracefully. Program continues.\n");

    }

    printf("\n--- Evaluation ---\n");

    printf("In C, we must manually check return codes.\n");
    printf("If the programmer forgets to check, the program might crash later.\n");

    return 0;
}

// ============================================================
// LESSONS LEARNED (C VERSION)
//
// 1. C does not have try-catch or throw.
// 2. Errors are handled by checking return values.
// 3. stderr outputs error messages separately from normal output.
// 4. errno stores error information.
// 5. strerror() converts error numbers into readable messages.
// 6. Return codes allow functions to communicate success or failure.
// ============================================================
