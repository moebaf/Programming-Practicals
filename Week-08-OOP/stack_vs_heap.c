
// ============================================================
// ACTIVITY 2: STACK VS HEAP STRUCTS IN C
// Learning Outcome: Analyse stack vs heap allocation
// ============================================================

#include <stdio.h>
#include <stdlib.h> // Required for malloc and free
#include <string.h>

// Define the Car structure
struct Car {
    char model[20];
};

// Function to simulate a constructor
void initCar(struct Car *c, const char *modelName) {
    strcpy(c->model, modelName);
    printf("Car created: %s\n", c->model);
}

// Function to simulate a destructor (cleanup)
void destroyCar(struct Car *c) {
    printf("Car destroyed: %s\n", c->model);
}

int main() {

    printf("--- Creating Stack Object ---\n");

    // STACK ALLOCATION: Memory is managed automatically.
    struct Car stackCar;
    initCar(&stackCar, "Toyota");

    printf("\n--- Creating Heap Object ---\n");

    // HEAP ALLOCATION: Allocate memory dynamically using malloc.
    // malloc returns a void pointer, so we cast it to struct Car*.
    struct Car *heapCar = (struct Car*)malloc(sizeof(struct Car));

    // Check whether malloc successfully allocated memory.
    if (heapCar != NULL) {
        initCar(heapCar, "Honda");

        // Access heap struct members using the arrow operator.
        printf("Heap car model: %s\n", heapCar->model);
    }

    printf("\n--- End of main function ---\n");

    // Manually free heap memory to prevent a memory leak.
    if (heapCar != NULL) {
        destroyCar(heapCar);
        free(heapCar);

        heapCar = NULL; // Prevent a dangling pointer
    }

    // The stack object is destroyed automatically
    // when the function ends.

    return 0;
}

// ============================================================
// LESSONS LEARNED (C VERSION)
//
// 1. Stack structs are automatically managed.
// 2. Heap structs are created using malloc().
// 3. Heap memory must be released using free().
// 4. Use a dot (.) to access stack struct members.
// 5. Use an arrow (->) to access members through a pointer.
// 6. Always check whether malloc() successfully allocated memory.
// ============================================================
