
// ============================================================
// ACTIVITY 1: BASIC FILE I/O IN C
// Learning Outcome: Read numbers, sum them, write to a file
// ============================================================

#include <stdio.h> // Required for file input and output

int main() {

    // 1. DECLARE FILE POINTERS
    // FILE stores information about an open file.
    FILE *inputFile;
    FILE *outputFile;

    // 2. OPEN FILE FOR READING ("r" mode)
    // fopen returns NULL if the file cannot be opened.
    inputFile = fopen("numbers.txt", "r");

    // Check if the input file opened successfully.
    if (inputFile == NULL) {
        printf("Error: Could not open numbers.txt for reading!\n");
        return 1;
    }

    int num;
    int sum = 0;

    printf("Reading numbers from file...\n");

    // 3. READ DATA IN A LOOP
    // fscanf reads formatted data from a file.
    // EOF indicates the end of the file.
    while (fscanf(inputFile, "%d", &num) != EOF) {
        printf("Read: %d\n", num);

        sum += num;
    }

    // 4. CLOSE THE INPUT FILE
    // Always close files when finished using them.
    fclose(inputFile);

    printf("Total Sum: %d\n", sum);

    // 5. OPEN FILE FOR WRITING ("w" mode)
    // Creates sum.txt or overwrites it if it already exists.
    outputFile = fopen("sum.txt", "w");

    // Check if the output file opened successfully.
    if (outputFile == NULL) {
        printf("Error: Could not create sum.txt for writing!\n");
        return 1;
    }

    // 6. WRITE DATA TO THE FILE
    // fprintf writes formatted information into a file.
    fprintf(outputFile, "The total sum is: %d\n", sum);
    fprintf(outputFile, "Calculated automatically by the C program.\n");

    // 7. CLOSE THE OUTPUT FILE
    fclose(outputFile);

    printf("Result successfully saved to sum.txt!\n");

    return 0;
}

// ============================================================
// LESSONS LEARNED (C VERSION)
//
// 1. FILE * is used to handle files in C.
// 2. fopen("filename", "r") opens a file for reading.
// 3. fopen("filename", "w") opens a file for writing.
// 4. fscanf() reads formatted data from a file.
// 5. fprintf() writes formatted data into a file.
// 6. Always check if a FILE pointer is NULL.
// 7. Always use fclose() when finished with a file.
// ============================================================
