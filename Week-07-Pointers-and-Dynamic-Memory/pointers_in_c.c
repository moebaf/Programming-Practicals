
#include <stdio.h>

int main() {
    int originalValue = 100;

    int *ptr1 = &originalValue;
    int *ptr2 = &originalValue;

    printf("Initial State:\n");
    printf("originalValue = %d\n", originalValue);
    printf("*ptr1 = %d\n", *ptr1);
    printf("*ptr2 = %d\n", *ptr2);

    // Modify the value using ptr1
    *ptr1 = 200;

    printf("\nAfter modifying through ptr1:\n");
    printf("originalValue = %d\n", originalValue);
    printf("*ptr2 = %d\n", *ptr2);

    // Modify the value using ptr2
    *ptr2 = 300;

    printf("\nAfter modifying through ptr2:\n");
    printf("originalValue = %d\n", originalValue);
    printf("*ptr1 = %d\n", *ptr1);

    // Make ptr1 point to another variable
    int anotherValue = 500;
    ptr1 = &anotherValue;

    printf("\nAfter making ptr1 point to anotherValue:\n");
    printf("originalValue = %d\n", originalValue);
    printf("*ptr1 = %d\n", *ptr1);

    return 0;
}
