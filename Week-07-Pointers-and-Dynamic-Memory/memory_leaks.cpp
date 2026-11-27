
#include <iostream>
using namespace std;

// Demonstrates a memory leak
void createLeak() {
    int* ptr = new int(42);

    cout << "Allocated memory at address: " << ptr << endl;
    cout << "Value stored: " << *ptr << endl;

    // Memory is intentionally not released.
}

// Demonstrates how to fix a memory leak
void fixLeak() {
    int* ptr = new int(42);

    cout << "Allocated memory at address: " << ptr << endl;
    cout << "Value stored: " << *ptr << endl;

    // Release the allocated memory
    delete ptr;
    ptr = nullptr;

    cout << "Memory has been freed successfully." << endl;
}

int main() {
    cout << "Demonstrating a memory leak..." << endl;
    createLeak();

    cout << "\nDemonstrating how to fix a memory leak..." << endl;
    fixLeak();

    return 0;
}
