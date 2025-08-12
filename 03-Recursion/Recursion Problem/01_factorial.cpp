// Finding Factorial using Recursion in C++

/*
Factorial of a number (n!) is the product of all positive integers less than or equal to n.

Mathematically:
n! = n × (n-1) × (n-2) × ... × 1
By definition:
0! = 1  (base case)

Recursive definition:
n! = 1                  if n = 0 or n = 1   (base case)
n! = n × (n - 1)!       otherwise           (recursive case)

Why recursion works well here:
- The factorial problem naturally breaks into a smaller factorial problem.
- Example: 5! = 5 × 4!  and 4! = 4 × 3!  ... until base case is reached.
*/

#include <iostream>
using namespace std;

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1)  // Base case
        return 1;
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}

/*
Sample Output:
--------------
Enter a number: 5
Factorial of 5 is: 120
*/

// SUMMARY 
/*
- Factorial is a classic example of recursion.
- Base case: n = 0 or n = 1 → return 1.
- Recursive step: multiply n by factorial(n-1).
- Use long long to store results for larger n.
- Beware: factorial grows very fast → integer overflow possible for large n.
*/
