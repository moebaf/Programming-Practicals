
#include <stdio.h>

// Function demonstrating pass-by-value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    printf("Inside swapByValue: a = %d, b = %d\n", a, b);
}

// Function demonstrating how pointers can fix the swap
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("--- Pass by Value ---\n");
    printf("Before swap: x = %d, y = %d\n", x, y);

    swapByValue(x, y);

    printf("After swap: x = %d, y = %d\n", x, y);

    printf("\n--- Swap Using Pointers ---\n");
    swapByPointer(&x, &y);

    printf("After pointer swap: x = %d, y = %d\n", x, y);

    return 0;
}
