
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    // Access array elements using pointer arithmetic
    cout << "Array elements accessed via pointer arithmetic:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Value: " << *ptr << endl;
        ptr++;
    }

    // Reset pointer to the beginning of the array
    ptr = numbers;

    // Access elements using offset arithmetic
    cout << "\nAccessing using offset arithmetic:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << " has value: "
             << *(ptr + i) << endl;
    }

    return 0;
}
