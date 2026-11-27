
// ============================================================
// ACTIVITY 2: ROW-MAJOR ORDER IN A 2D ARRAY (C++ VERSION)
// Learning Outcome: Understand how 2D arrays are stored in memory
// ============================================================

#include <iostream>
using namespace std;

int main() {

    // Declare and initialise a 3x4 matrix
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Display the matrix
    cout << "Matrix:" << endl;

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << matrix[row][col] << "\t";
        }
        cout << endl;
    }

    // Display elements in row-major order
    cout << "\nRow-major traversal:" << endl;

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << matrix[row][col] << " ";
        }
    }

    cout << "\n\nMemory addresses:" << endl;

    // Display the memory address of each element
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << "matrix[" << row << "][" << col << "] = "
                 << matrix[row][col]
                 << " | Address: " << &matrix[row][col] << endl;
        }
    }

    return 0;
}
