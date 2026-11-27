
#include <iostream>
using namespace std;

int main() {
    int originalValue = 100;

    // Create a reference and a pointer to originalValue
    int& refValue = originalValue;
    int* ptrValue = &originalValue;

    cout << "Initial State:" << endl;
    cout << "originalValue = " << originalValue << endl;
    cout << "refValue = " << refValue << endl;
    cout << "*ptrValue = " << *ptrValue << endl;

    // Modify the value through the reference
    refValue = 200;

    cout << "\nAfter modifying through reference:" << endl;
    cout << "originalValue = " << originalValue << endl;
    cout << "*ptrValue = " << *ptrValue << endl;

    // Modify the value through the pointer
    *ptrValue = 300;

    cout << "\nAfter modifying through pointer:" << endl;
    cout << "originalValue = " << originalValue << endl;
    cout << "refValue = " << refValue << endl;

    // Make the pointer point to another variable
    int anotherValue = 500;
    ptrValue = &anotherValue;

    cout << "\nAfter making pointer point to anotherValue:" << endl;
    cout << "originalValue = " << originalValue << endl;
    cout << "*ptrValue = " << *ptrValue << endl;

    return 0;
}
