// Problem: Reverse a given string
// This program takes a string from the user and prints its reverse.

#include <iostream>
#include <string>
#include <algorithm> // For std::reverse

using namespace std;

// Function to reverse a string
string reverseString(string str) {
    reverse(str.begin(), str.end()); // Using STL algorithm
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string reversed = reverseString(input);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}
