
// ============================================================
// ACTIVITY 4: ROBUST CSV PARSER IN C
// Learning Outcome: Read CSV, compute GPA, handle bad lines
// ============================================================

#include <stdio.h>
#include <string.h>

int main() {

    // Open the CSV file for reading.
    FILE *file = fopen("students.csv", "r");

    // Check whether the file opened successfully.
    if (file == NULL) {
        fprintf(stderr, "Error: Could not find students.csv!\n");
        return 1;
    }

    // Buffer to hold one line of text.
    char line[100];

    printf("--- Processing Student Records ---\n");

    // 1. READ THE FILE LINE BY LINE
    // fgets reads one line at a time.
    while (fgets(line, sizeof(line), file)) {

        char name[20];
        char scoreStr1[10], scoreStr2[10], scoreStr3[10];
        int s1, s2, s3;

        // 2. PARSE THE CSV LINE
        // sscanf extracts values separated by commas.
        // It returns the number of items successfully read.
        int itemsRead = sscanf(line, "%[^,],%[^,],%[^,],%[^\n]",
            name, scoreStr1, scoreStr2, scoreStr3);

        // Check whether all four items were extracted.
        if (itemsRead != 4) {
            printf("WARNING: Skipping malformed line format: %s", line);
            continue;
        }

        // 3. HANDLE INVALID SCORE DATA
        // Convert the score strings into integers.
        // sscanf returns 1 if the conversion succeeds.
        int valid1 = sscanf(scoreStr1, "%d", &s1);
        int valid2 = sscanf(scoreStr2, "%d", &s2);
        int valid3 = sscanf(scoreStr3, "%d", &s3);

        // Check whether all three scores are valid numbers.
        if (valid1 == 1 && valid2 == 1 && valid3 == 1) {

            // Calculate the student's average.
            double average = (s1 + s2 + s3) / 3.0;

            printf("%s -> Average: %.2f\n", name, average);

        } else {

            // Skip the record if any score is invalid.
            printf("WARNING: Skipping malformed record for %s (Invalid score data).\n", name);

            // The loop continues to the next student.
        }
    }

    // Close the CSV file.
    fclose(file);

    printf("\n--- Processing Complete ---\n");

    return 0;
}

// ============================================================
// LESSONS LEARNED (C VERSION)
//
// 1. fgets() reads a file one line at a time.
// 2. sscanf() extracts data from strings.
// 3. sscanf() returns the number of successfully read items.
// 4. Return values help detect invalid or corrupted data.
// 5. continue skips the current record and moves to the next.
// 6. fclose() closes the file after processing.
// ============================================================
