
#include <stdio.h>

// Simple recursive factorial function
int factorialRecursive(int n) {
    // Base case: stop recursion
    if (n <= 1) {
        return 1;
    }

    // Recursive case
    return n * factorialRecursive(n - 1);
}

// Helper function for tail recursion
int factorialTailHelper(int n, int accumulator) {
    // Base case
    if (n <= 1) {
        return accumulator;
    }

    // Tail-recursive call
    return factorialTailHelper(n - 1, n * accumulator);
}

// Function that starts tail recursion
int factorialTail(int n) {
    return factorialTailHelper(n, 1);
}

int main() {
    int num;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    // Check for negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    printf("\nUsing simple recursion:\n");
    printf(" %d! = %d\n", num, factorialRecursive(num));

    printf("\nUsing tail recursion:\n");
    printf(" %d! = %d\n", num, factorialTail(num));

    printf("\n--- Comparison ---\n");
    printf("Simple recursion: Clear, matches mathematical definition.\n");
    printf("Tail recursion: More efficient for large n (compiler optimization).\n");

    return 0;
}
