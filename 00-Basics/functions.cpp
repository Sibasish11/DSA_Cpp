// functions.cpp
// Topic: Functions in C++
// This file explains what functions are, why we use them, and how to create and call them.

#include <iostream>
using namespace std;

/*
    What is a Function?
    
    A function is a block of code designed to perform a specific task.
    Functions help make code reusable, modular, and easier to read.

    Syntax:
    return_type function_name(parameters) {
        // body of the function
        return value;   // optional, only if return_type is not void
    }
*/

// 1. Function with no parameters and no return value
void greet() {
    cout << "Hello! Welcome to the world of C++ functions." << endl;
}

// 2. Function with parameters and no return value
void printSum(int a, int b) {
    cout << "Sum of " << a << " and " << b << " is: " << a + b << endl;
}

// 3. Function with parameters and a return value
int multiply(int a, int b) {
    return a * b;
}

// 4. Function with default parameters
void introduce(string name, int age = 18) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

// 5. Function Overloading: Same function name but different parameters
int square(int x) {
    return x * x;
}

double square(double x) {
    return x * x;
}

// 6. Function Prototype (Declaration before main, definition later)
double divide(double a, double b);

int main() {
    // Function with no parameters
    greet();

    // Function with parameters
    printSum(5, 10);

    // Function with parameters & return value
    int product = multiply(4, 6);
    cout << "Product: " << product << endl;

    // Function with default parameters
    introduce("Alice");
    introduce("Bob", 25);

    // Function overloading
    cout << "Square of 5 (int): " << square(5) << endl;
    cout << "Square of 3.14 (double): " << square(3.14) << endl;

    // Function prototype usage
    cout << "Division: " << divide(10, 2) << endl;

    return 0;
}

// Definition of function declared earlier
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

/*
    Key Points:

    1. Functions make code reusable and organized.
    2. Function overloading allows multiple functions with the same name but different parameters.
    3. Default parameters can simplify function calls.
    4. Always handle special cases (e.g., division by zero).
*/
