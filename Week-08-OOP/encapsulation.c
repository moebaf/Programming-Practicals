
// ============================================================
// ACTIVITY 1: SIMULATING ENCAPSULATION IN C
// Learning Outcome: Apply encapsulation using structs and functions
// ============================================================

#include <stdio.h>
#include <string.h>

// Define a structure named Student
// In C, structs hold data but cannot contain functions.
struct Student {
    char name[50];
    int age;
};

// SETTER FUNCTION: Safely modifies the student's age.
// We pass a pointer so we can modify the original struct.
void setAge(struct Student *s, int newAge) {

    // Check if the new age is realistic
    if (newAge > 0 && newAge < 120) {

        // Arrow operator accesses struct members through a pointer
        s->age = newAge;

    } else {

        printf("Error: Invalid age! Age must be between 1 and 119.\n");
        s->age = 0;
    }
}

// GETTER FUNCTION: Safely reads the student's age.
int getAge(struct Student *s) {
    return s->age;
}

int main() {

    // 1. Create a Student struct on the stack
    struct Student s1;

    // 2. Initialize the student's data
    strcpy(s1.name, "Alice");

    // 3. Set the age using our setter function
    setAge(&s1, 20);

    // 4. Display the student information using the getter
    printf("Student Name: %s\n", s1.name);
    printf("Student Age: %d\n", getAge(&s1));

    // 5. Try to set an invalid age
    printf("\nAttempting to change age to -5...\n");

    setAge(&s1, -5);

    printf("Age after invalid attempt: %d\n", getAge(&s1));

    // NOTE: C does not have private members.
    // A programmer could bypass the functions using:
    // s1.age = -50;

    // Encapsulation in C relies on programmer discipline.

    return 0;
}

// ============================================================
// LESSONS LEARNED (C VERSION)
//
// 1. C uses structs to group related data together.
// 2. C does not have private or public keywords.
// 3. Getter functions safely retrieve data.
// 4. Setter functions modify data and validate input.
// 5. Pointers allow functions to modify the original struct.
// 6. The arrow operator (->) accesses members through pointers.
// ============================================================
