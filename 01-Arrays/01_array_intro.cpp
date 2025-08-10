#include <iostream>
using namespace std;

/*
    
       Introduction to Arrays in C++
    

    1. Definition:
       - An array is a collection of elements of the same data type
         stored in contiguous memory locations.
       - Each element is accessed using an index, starting from 0.

    2. Key Features:
       - Fixed size (declared during creation, size cannot change).
       - All elements have the same data type.
       - Random access using index numbers.

    3. Advantages:
       - Easy to access elements using index.
       - Sequential memory storage helps in faster access.

    4. Disadvantages:
       - Fixed size (cannot shrink or grow at runtime).
       - Insertion/Deletion in the middle can be costly.

    5. Syntax:
       dataType arrayName[size];

    Example:
       int numbers[5]; // array of size 5 to store integers

    6. Indexing:
       - Index starts from 0 and goes to size-1.
       - Access: arrayName[index]
       - Example: numbers[0] → first element, numbers[4] → last element

    7. Memory Representation:
       If int arr[3] = {10, 20, 30}
       Index:   0     1     2
       Value:  10    20    30

    
    Let's see an example in C++.
    
*/

int main() {
    // Declare and initialize an array
    int marks[5] = {85, 90, 78, 88, 76};

    // Display array elements
    cout << "Marks of students: ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;

    // Access specific element
    cout << "First student's marks: " << marks[0] << endl;
    cout << "Last student's marks: " << marks[4] << endl;

    // Modify an element
    marks[2] = 80; // changing 3rd student's marks
    cout << "Updated marks of 3rd student: " << marks[2] << endl;

    return 0;
}

