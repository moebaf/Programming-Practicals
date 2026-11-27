
// ============================================================
// ACTIVITY 2: SIMULATING VIRTUAL FUNCTIONS
// Learning Outcome: Analyse function pointers
// ============================================================

#include <stdio.h>
#include <string.h>

// 1. Define a Function Pointer Type
// This pointer will point to a function that takes no arguments
// and returns void.
typedef void (*SpeakFunction)();

// Base Struct
struct Animal {
    // The function pointer (simulating the virtual table)
    SpeakFunction speak;
};

// Derived Struct (inherits from Animal)
struct Dog {
    struct Animal base; // Embed the base
};

// --- The actual functions ---

void genericSound() {
    printf("Animal makes a generic sound.\n");
}

void dogBark() {
    printf("Dog barks: Woof! Woof!\n");
}

int main() {

    printf("--- Simulating Non-Virtual (Base only) ---\n");

    struct Animal myAnimal;
    myAnimal.speak = genericSound;

    myAnimal.speak(); // Calls genericSound()

    printf("\n--- Simulating Virtual (Dynamic binding) ---\n");

    struct Dog myDog;

    // OVERRIDE: Assign the dogBark function to the inherited function pointer
    myDog.base.speak = dogBark;

    // POLYMORPHISM: Cast the Dog pointer to an Animal pointer
    struct Animal* pet = (struct Animal*)&myDog;

    // Call the function via the pointer
    pet->speak(); // Calls dogBark()

    return 0;
}

// ============================================================
// LESSONS LEARNED (C VERSION)
//
// 1. C uses function pointers to simulate virtual functions.
// 2. A derived struct can assign a different function to the
//    function pointer stored in its base struct.
// 3. Calling pet->speak() uses the function pointer stored
//    in memory and calls the assigned function.
// ============================================================
