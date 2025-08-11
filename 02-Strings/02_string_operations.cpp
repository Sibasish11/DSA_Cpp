// Basic String Operations in C++

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";

    // ----- Concatenation -----
    string result = str1 + " " + str2;
    cout << "Concatenation: " << result << endl;

    // ----- Append -----
    str1.append(" C++");
    cout << "After append: " << str1 << endl;

    // ----- Length & Size -----
    cout << "Length of str1: " << str1.length() << endl;
    cout << "Size of str2: " << str2.size() << endl;

    // ----- Access characters -----
    cout << "First character of str1: " << str1[0] << endl;
    cout << "Last character of str2: " << str2[str2.length() - 1] << endl;

    // ----- Substring -----
    string sub = result.substr(0, 5); // from index 0, length 5
    cout << "Substring: " << sub << endl;

    // ----- Find -----
    size_t pos = result.find("World");
    if (pos != string::npos) {
        cout << "'World' found at position: " << pos << endl;
    } else {
        cout << "'World' not found" << endl;
    }

    // ----- Replace -----
    result.replace(6, 5, "Universe"); // replace 5 chars starting at index 6
    cout << "After replace: " << result << endl;

    // ----- Erase -----
    result.erase(6, 8); // erase 8 chars from index 6
    cout << "After erase: " << result << endl;

    // ----- Insert -----
    result.insert(6, "Friends");
    cout << "After insert: " << result << endl;

    return 0;
}

/*
Key Methods:
- + or append() → Concatenate strings
- length() / size() → Get string length
- substr(start, len) → Extract substring
- find(str) → Find index of substring
- replace(start, len, str) → Replace part of string
- erase(start, len) → Remove part of string
- insert(index, str) → Insert string at position
*/
