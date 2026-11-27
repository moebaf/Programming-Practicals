
#include <stdio.h>

// Global variable: accessible throughout the program
int globalCounter = 100;

// Function that accesses the global variable
void displayGlobal() {
    printf("Inside displayGlobal: globalCounter = %d\n", globalCounter);
}

// Function that modifies the global variable
void modifyGlobal() {
    globalCounter = 500;
    printf("Inside modifyGlobal: globalCounter changed to %d\n", globalCounter);
}

// Function demonstrating a local variable with the same name
void localDemo() {
    int globalCounter = 999;
    printf("Inside localDemo: globalCounter = %d\n", globalCounter);
}

int main() {
    // Local variable: only accessible inside main
    int localCounter = 50;

    printf("In main: globalCounter = %d\n", globalCounter);
    printf("In main: localCounter = %d\n", localCounter);

    displayGlobal();
    modifyGlobal();
    localDemo();

    printf("Back in main: globalCounter = %d\n", globalCounter);

    return 0;
}
