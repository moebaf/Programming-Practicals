
#include <stdio.h>
#include <stdlib.h>

// Structure for a dynamic array
typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicArray;

// Initialize the dynamic array
void initArray(DynamicArray *arr, int initialCapacity) {
    arr->size = 0;
    arr->capacity = initialCapacity;
    arr->data = (int*)malloc(arr->capacity * sizeof(int));

    if (arr->data == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    printf("Created dynamic array with capacity %d.\n", arr->capacity);
}

// Free the dynamic array memory
void freeArray(DynamicArray *arr) {
    free(arr->data);
    arr->data = NULL;
    arr->size = 0;
    arr->capacity = 0;
}

// Add an element to the dynamic array
void push_back(DynamicArray *arr, int value) {
    if (arr->size == arr->capacity) {
        int oldCapacity = arr->capacity;
        int newCapacity = oldCapacity * 2;

        int *newData = (int*)malloc(newCapacity * sizeof(int));

        if (newData == NULL) {
            printf("Memory allocation failed!\n");
            freeArray(arr);
            exit(1);
        }

        // Copy existing elements into the new memory
        for (int i = 0; i < arr->size; i++) {
            newData[i] = arr->data[i];
        }

        // Release the old memory
        free(arr->data);

        arr->data = newData;
        arr->capacity = newCapacity;

        printf("[Resized capacity from %d to %d]\n",
               oldCapacity, newCapacity);
    }

    arr->data[arr->size] = value;
    arr->size++;
}

// Display the dynamic array
void display(DynamicArray *arr) {
    printf("Array (Size: %d, Capacity: %d): ",
           arr->size, arr->capacity);

    for (int i = 0; i < arr->size; i++) {
        printf("%d ", arr->data[i]);
    }

    printf("\n");
}

int main() {
    DynamicArray arr;

    // Create an array with an initial capacity of 2
    initArray(&arr, 2);

    push_back(&arr, 10);
    push_back(&arr, 20);
    display(&arr);

    printf("\nAdding third element...\n");
    push_back(&arr, 30);
    display(&arr);

    printf("\nAdding fourth and fifth elements...\n");
    push_back(&arr, 40);
    push_back(&arr, 50);
    display(&arr);

    // Release allocated memory
    freeArray(&arr);

    return 0;
}
