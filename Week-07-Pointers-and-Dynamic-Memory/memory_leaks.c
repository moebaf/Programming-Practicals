
#include <stdio.h>
#include <stdlib.h>

// This function demonstrates a memory leak
void createLeak() {
    int *ptr = (int*)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    *ptr = 42;

    printf("Allocated memory at address: %p\n", (void*)ptr);
    printf("Value stored: %d\n", *ptr);

    // Memory is intentionally not freed.
    // This demonstrates a memory leak.
}

int main() {
    printf("Demonstrating a memory leak...\n");

    createLeak();

    printf("Function finished. Memory was not freed.\n");

    return 0;
}
