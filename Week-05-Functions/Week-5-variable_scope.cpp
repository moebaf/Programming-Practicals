#include <iostream>
using namespace std;

// GLOBAL VARIABLE
int globalCounter = 100;

// FUNCTION: displayGlobal
void displayGlobal() {
    cout << "Inside displayGlobal: globalCounter = " << globalCounter << endl;

    // Uncomment the line below to see an error:
    // cout << localCounter;
}

// FUNCTION: modifyGlobal
void modifyGlobal() {
    globalCounter = 500;
    cout << "Inside modifyGlobal: globalCounter changed to " << globalCounter << endl;
}

// FUNCTION: localDemo
void localDemo() {
    int globalCounter = 999;
    cout << "Inside localDemo: globalCounter = " << globalCounter << endl;
}

// The main function
int main() {
    int localCounter = 50;

    cout << "In main: globalCounter = " << globalCounter << endl;
    cout << "In main: localCounter = " << localCounter << endl;

    displayGlobal();
    modifyGlobal();
    localDemo();

    cout << "Back in main: globalCounter = " << globalCounter << endl;

    // Uncomment to see an error:
    // cout << globalCounterLocal;

    return 0;
}

// 1. Why does localDemo print 999 instead of 500?
// Because it has its own local variable named globalCounter.

// 2. Why does localCounter not exist inside displayGlobal?
// Because localCounter belongs to main and cannot be accessed by other functions.

// 3. Why does globalCounter change after calling modifyGlobal?
// Because modifyGlobal changes the actual global variable.

// 4. What would happen if you uncommented the error lines?
// The program would show a compile error because the variables are not declared in that scope.