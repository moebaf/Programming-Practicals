
// ============================================================
// ACTIVITY 2: ROW-MAJOR ORDER IN A 2D ARRAY (C VERSION)
// Learning Outcome: Understand how 2D arrays are stored in memory
// ============================================================

#include <stdio.h>

int main() {

    // Declare and initialise a 3x4 matrix
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Display the matrix
    printf("Matrix:\n");

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%4d", matrix[row][col]);
        }
        printf("\n");
    }

    // Display elements in row-major order
    printf("\nRow-major traversal:\n");

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%d ", matrix[row][col]);
        }
    }

    printf("\n\nMemory addresses:\n");

    // Display the memory address of each element
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("matrix[%d][%d] = %2d | Address: %p\n",
                   row, col, matrix[row][col],
                   (void *)&matrix[row][col]);
        }
    }

    return 0;
}
