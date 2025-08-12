// Concept: Palindrome Checker
// A palindrome is a word/phrase that reads the same backward as forward,
// ignoring spaces, punctuation, and case differences.

// Example:
// Input: "madam"  -> Output: Palindrome
// Input: "Hello"  -> Output: Not a Palindrome
// Input: "A man a plan a canal Panama" -> Output: Palindrome

#include <iostream>
#include <string>
#include <cctype> // for tolower(), isalpha()

using namespace std;

// Function to check if a given string is a palindrome
bool isPalindrome(const string &str) {
    string cleaned = "";

    // Remove non-alphabet characters and convert to lowercase
    for (char ch : str) {
        if (isalpha(ch)) {
            cleaned += tolower(ch);
        }
    }

    // Compare characters from start and end
    int left = 0;
    int right = cleaned.length() - 1;

    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
