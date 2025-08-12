// Introduction to Recursion in C++

// THEORY 
/*
Recursion is a programming technique where a function calls itself
either directly or indirectly to solve a problem.

Key concepts:
1. **Base Case**:
   - The condition under which the recursive function stops calling itself.
   - Prevents infinite recursion.
   
2. **Recursive Case**:
   - The part of the function where it calls itself with a smaller subproblem.
   - Brings the problem closer to the base case.

Why use recursion?
- Some problems are naturally recursive (e.g., factorial, Fibonacci, tree traversal).
- Makes the code cleaner and easier to understand (but can be less efficient in terms of memory due to stack usage).

Important points:
- Every recursion must have a base case.
- Avoid deep recursion for large inputs (may cause stack overflow).
- Recursion often has higher space complexity due to call stack usage.

General Structure of a Recursive Function:

returnType functionName(parameters) {
    if (base case condition) {
        // stop condition
        return something;
    } else {
        // recursive call
        return functionName(modified parameters);
    }
}
*/

// EXAMPLE 
#include <iostream>
using namespace std;

// Example: Print numbers from n to 1 using recursion
void printNumbers(int n) {
    if (n == 0)  // Base case
        return;

    cout << n << " ";   // Current work
    printNumbers(n - 1); // Recursive call
}

int main() {
    int num = 5;
    cout << "Printing numbers from " << num << " to 1 using recursion:\n";
    printNumbers(num);

    return 0;
}

/*
Output:
Printing numbers from 5 to 1 using recursion:
5 4 3 2 1
*/

// SUMMARY
/*
- Recursion = function calling itself.
- Always have a base case to prevent infinite calls.
- Break the problem into smaller subproblems.
- Be mindful of memory and stack depth.

*/
