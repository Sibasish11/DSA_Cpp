// 📌 Introduction to Searching in DSA

/*
🔹 Searching Definition:
   Searching is the process of finding a specific element in a collection of data
   (like an array, list, or database).

🔹 Types of Searching Techniques:
   1. Linear Search (Sequential Search)
      - Check each element one by one until the target is found or end is reached.
      - Works for both sorted and unsorted arrays.
      - Time Complexity: O(N)

   2. Binary Search
      - Works on sorted arrays only.
      - Repeatedly divides the search interval into half.
      - Time Complexity: O(log N)

🔹 Real-Life Analogy:
   - Linear Search: Looking for your friend's name in an unsorted guest list, checking from top to bottom.
   - Binary Search: Looking for a word in a dictionary (sorted), jumping to the middle, then deciding to go left or right.

🔹 Complexity Summary:
   - Best case: O(1) (element found at the start/middle)
   - Worst case: O(N) for Linear, O(log N) for Binary.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "=== Searching Introduction ===" << endl;
    cout << "Searching is the process of finding an element in data.\n";
    cout << "Two main techniques:\n";
    cout << "1. Linear Search - Works for unsorted and sorted arrays.\n";
    cout << "2. Binary Search - Works only for sorted arrays.\n";
    cout << "Time Complexity: O(N) for Linear, O(log N) for Binary.\n";
    return 0;
}
