// Demonstrating common C++ string functions

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "Hello World";

    // ----- to_uppercase -----
    string upperStr = str;
    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    cout << "Uppercase: " << upperStr << endl;

    // ----- to_lowercase -----
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    cout << "Lowercase: " << lowerStr << endl;

    // ----- Reverse -----
    string revStr = str;
    reverse(revStr.begin(), revStr.end());
    cout << "Reversed: " << revStr << endl;

    // ----- Compare -----
    string s1 = "apple";
    string s2 = "banana";
    if (s1.compare(s2) == 0)
        cout << "Strings are equal" << endl;
    else if (s1.compare(s2) < 0)
        cout << s1 << " comes before " << s2 << endl;
    else
        cout << s1 << " comes after " << s2 << endl;

    // ----- Find and Replace -----
    string text = "I like cats. Cats are cute.";
    size_t pos = text.find("cats");
    if (pos != string::npos) {
        text.replace(pos, 4, "dogs");
    }
    cout << "After replace: " << text << endl;

    // ----- Erase Spaces -----
    string spaced = "   trim spaces   ";
    // left trim
    spaced.erase(spaced.begin(), find_if(spaced.begin(), spaced.end(), [](unsigned char ch) {
        return !isspace(ch);
    }));
    // right trim
    spaced.erase(find_if(spaced.rbegin(), spaced.rend(), [](unsigned char ch) {
        return !isspace(ch);
    }).base(), spaced.end());
    cout << "Trimmed: '" << spaced << "'" << endl;

    // ----- Check if string contains substring -----
    string sentence = "The quick brown fox";
    if (sentence.find("brown") != string::npos)
        cout << "Substring found!" << endl;
    else
        cout << "Substring not found." << endl;

    return 0;
}

/*
Functions Covered:
- transform(begin, end, begin, ::toupper/::tolower) → Case conversion
- reverse(begin, end) → Reverse a string
- compare(str) → Lexicographical comparison
- find(str) → Locate substring position
- replace(pos, len, str) → Replace part of string
- erase() + find_if() → Trim spaces
*/
