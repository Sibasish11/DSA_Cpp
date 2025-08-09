/*

 LOOPS IN C++ — BASICS

1. Purpose:
   - Loops let you run a block of code multiple times without repeating it manually.

2. Types of Loops in C++:
   a) for loop    → When you know how many times to repeat
      Syntax: for(initialization; condition; update) { ... }

   b) while loop  → When you don’t know the number of iterations in advance
      Syntax: while(condition) { ... }

   c) do-while loop → Runs at least once, then checks the condition
      Syntax: do { ... } while(condition);

3. Loop Control Statements:
   - break    → Exit the loop immediately
   - continue → Skip the current iteration and move to the next

4. Common Use Cases:
   - Iterating over arrays
   - Repeating a task until a condition is met
   - Running code a fixed number of times


*/

#include <iostream>
using namespace std;

int main() {
    // FOR LOOP — Print numbers 1 to 5
    cout << "For Loop:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // WHILE LOOP — Countdown from 5
    cout << "\nWhile Loop:" << endl;
    int count = 5;
    while (count > 0) {
        cout << count << " ";
        count--;
    }
    cout << endl;

    // DO-WHILE LOOP — Runs at least once
    cout << "\nDo-While Loop:" << endl;
    int num = 1;
    do {
        cout << num << " ";
        num++;
    } while (num <= 5);
    cout << endl;

    return 0;
}
