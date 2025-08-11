//  Introduction to Strings in C++

// In C++, a string is a sequence of characters.
// We have two main ways to work with strings:
//
// 1. C-Style Strings (Character Arrays):
//    - Stored as arrays of `char` ending with a null character '\0'.
//    - Example: char name[10] = "Hello";
//    - Need to use functions from <cstring> for operations.
//
// 2. C++ Strings (std::string):
//    - Part of the Standard Template Library (STL).
//    - Easier to use, supports many built-in functions.
//    - No need to manually manage '\0'.
//    - Example: string name = "Hello";
//
// Why prefer std::string over C-style char arrays?
//    - Dynamic size (no fixed length required during declaration).
//    - Rich set of built-in functions.
//    - Safe and easier syntax.
//
// Input/Output:
//    - `cin` and `cout` work with strings.
//    - For full lines including spaces, use `getline(cin, string_var)`.
//
// This file demonstrates both C-style and std::string usage.

#include <iostream>
#include <cstring>  // for C-style string functions
#include <string>   // for std::string
using namespace std;

int main() {
    // --------------------------
    //  C-Style String Example
    // --------------------------
    char cstr1[20] = "Hello";
    char cstr2[] = "World";

    cout << "C-Style String 1: " << cstr1 << endl;
    cout << "C-Style String 2: " << cstr2 << endl;

    strcat(cstr1, " ");  
    strcat(cstr1, cstr2);
    cout << "Concatenated C-Style String: " << cstr1 << endl;

    // Length of C-Style string
    cout << "Length of cstr1: " << strlen(cstr1) << endl;

    // --------------------------
    //  std::string Example
    // --------------------------
    string str1 = "Hello";
    string str2 = "World";

    cout << "\nC++ String 1: " << str1 << endl;
    cout << "C++ String 2: " << str2 << endl;

    string combined = str1 + " " + str2;
    cout << "Concatenated C++ String: " << combined << endl;

    cout << "Length of combined string: " << combined.length() << endl;

    string name;
    cout << "\nEnter your name: ";
    cin >> name;  // reads until first space
    cout << "Hello, " << name << "!" << endl;

    // Taking full line input
    cin.ignore(); // clear the newline from previous input
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Hello, " << fullName << "!" << endl;

    return 0;
}


