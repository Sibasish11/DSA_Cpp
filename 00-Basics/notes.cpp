// Purpose: Conceptual notes + example code for functions in C++
// Author: Sibasish Padhihari
// Location: DSA_Cpp/00-Basics

#include <iostream>
using namespace std;

/*

    📌 FUNCTIONS IN C++

    ➡ Definition: A function is a block of code that performs a specific task.
    ➡ Benefits:
        - Code reusability
        - Modular programming
        - Easier debugging

    🛠 TYPES OF FUNCTIONS:
    1. Built-in functions → Provided by C++ standard library (e.g., cout, sqrt()).
    2. User-defined functions → Written by the programmer.

    📌 Function Syntax:
        return_type function_name(parameters) {
          
        }

    Example:
        int add(int a, int b) {
            return a + b;
        }

    
    📌 FUNCTION COMPONENTS
    
    1. **Function Declaration (Prototype)** → Tells compiler about function’s name, parameters, and return type.
    2. **Function Definition** → Actual body of the function where task is written.
    3. **Function Call** → Invoking the function to execute it.
*/

// Function declaration (prototype)
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}

// Function to print a message (no parameters, no return)
void greet() {
    cout << "Hello! Welcome to C++ Functions." << endl;
}

// Function with default arguments
void displayInfo(string name, int age = 18) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

// Function overloading → Same function name, different parameters
int multiply(int a, int b) {
    return a * b;
}
double multiply(double a, double b) {
    return a * b;
}

int main() {
    // Function call examples
    greet();

    cout << "Sum: " << add(5, 7) << endl;

    displayInfo("Sibasish");
    displayInfo("Rohan", 21);

    cout << "Multiply int: " << multiply(3, 4) << endl;
    cout << "Multiply double: " << multiply(2.5, 4.2) << endl;

    return 0;
}

/*
    
    📌 KEY TAKEAWAYS
    
    ✔ Functions make code modular & reusable.
    ✔ Always declare before use or define before main().
    ✔ Can have default arguments & overloading.
    ✔ Follow naming conventions for clarity.
*/

