#include <iostream>
using namespace std;

/*
    Topic: Types of Arrays in C++

    1. Single-Dimensional Array (1D Array)
       - Stores elements in a single row.
       - Syntax: dataType arrayName[size];

    2. Multi-Dimensional Array (2D, 3D, ...)
       - Stores elements in a grid (or higher dimensions).
       - Example: 2D array stores elements in rows & columns.

    3. Dynamic Array
       - Size can be changed at runtime using pointers or STL containers (like vector).

    In this program:
    - We demonstrate:
        a) Single-Dimensional Array
        b) Two-Dimensional Array
*/

int main() {

    // --- 1. Single-Dimensional Array ---
    int marks[5] = {85, 90, 78, 92, 88};

    cout << "Single-Dimensional Array Elements:\n";
    for (int i = 0; i < 5; i++) {
        cout << "marks[" << i << "] = " << marks[i] << endl;
    }

    cout << "\n-----------------------------------\n";

    // Two-Dimensional Array 
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Two-Dimensional Array Elements (Matrix Form):\n";
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    cout << "\n-----------------------------------\n";

    // Dynamic Array using new operator 
    int size;
    cout << "Enter size for dynamic array: ";
    cin >> size;

    int* dynArr = new int[size]; // Allocate memory dynamically

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> dynArr[i];
    }

    cout << "Dynamic Array Elements:\n";
    for (int i = 0; i < size; i++) {
        cout << dynArr[i] << " ";
    }
    cout << endl;

    delete[] dynArr; // Free allocated memory

    return 0;
}
