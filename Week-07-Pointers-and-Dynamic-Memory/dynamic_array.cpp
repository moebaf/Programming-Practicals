
#include <iostream>
using namespace std;

// Dynamic Array class
class DynamicArray {
private:
    int* data;
    int size;
    int capacity;

public:
    // Constructor
    DynamicArray(int initialCapacity) {
        capacity = initialCapacity;
        size = 0;
        data = new int[capacity];

        cout << "Created dynamic array with capacity "
             << capacity << "." << endl;
    }

    // Destructor
    ~DynamicArray() {
        delete[] data;
    }

    // Add an element to the dynamic array
    void push_back(int value) {
        if (size == capacity) {
            int oldCapacity = capacity;
            int newCapacity = capacity * 2;

            int* newData = new int[newCapacity];

            // Copy existing elements
            for (int i = 0; i < size; i++) {
                newData[i] = data[i];
            }

            // Release old memory
            delete[] data;

            data = newData;
            capacity = newCapacity;

            cout << "[Resized capacity from "
                 << oldCapacity << " to "
                 << capacity << "]" << endl;
        }

        data[size] = value;
        size++;
    }

    // Display the dynamic array
    void display() {
        cout << "Array (Size: " << size
             << ", Capacity: " << capacity << "): ";

        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }

        cout << endl;
    }
};

int main() {
    // Create an array with initial capacity of 2
    DynamicArray arr(2);

    arr.push_back(10);
    arr.push_back(20);
    arr.display();

    cout << "\nAdding third element..." << endl;
    arr.push_back(30);
    arr.display();

    cout << "\nAdding fourth and fifth elements..." << endl;
    arr.push_back(40);
    arr.push_back(50);
    arr.display();

    return 0;
}
