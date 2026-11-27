
#include <stdio.h>
#include <stdlib.h>

// This function demonstrates how to fix a memory leak
void fixLeak() {
    int *ptr = (int*)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    *ptr = 42;

    printf("Allocated memory at address: %p\n", (void*)ptr);
    printf("Value stored: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);
    ptr = NULL;

    printf("Memory has been freed successfully.\n");
}

int main() {
    printf("Demonstrating how to fix a memory leak...\n");

    fixLeak();

    printf("Function finished. No memory leak!\n");

    return 0;
}
