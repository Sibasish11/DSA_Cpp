/*
 VARIABLES IN C++ — BASICS

1. Definition:
   - A variable is a named storage in memory to hold data.
   - Syntax: data_type variable_name = value;

2. Rules for naming:
   - Must start with a letter or underscore (_)
   - Cannot start with a digit
   - No spaces or special characters (except _)
   - Case-sensitive

3. Common Data Types:
   - int     → whole numbers (e.g., 10, -5)
   - double  → floating-point numbers (e.g., 3.14, -0.5)
   - char    → single character (e.g., 'A', 'z')
   - bool    → true/false (stored as 1 or 0)
   - string  → text (requires <string> header)

4. Initialization:
   - You can declare and assign at once: int age = 20;
   - Or declare first, assign later: int age; age = 20;

5. Constants:
   - Use 'const' to make a variable's value unchangeable.
     Example: const double PI = 3.14159;

6. Memory size:
   - Depends on data type & system architecture.
     Example: int → usually 4 bytes on modern systems.

*/

#include <iostream>
using namespace std;

int main() {
    // Variable declaration
    int age = 20;           // integer
    double height = 5.9;    // floating-point
    char grade = 'A';       // character
    bool isStudent = true;  // boolean

    // Printing variables
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student? " << isStudent << endl; // true = 1, false = 0

    // Changing values
    age = 21;
    height = 6.0;
    cout << "\nAfter update:" << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;

    return 0;
}
