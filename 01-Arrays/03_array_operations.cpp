#include <iostream>
using namespace std;

/*
    ARRAY OPERATIONS
    Common operations on arrays include:
    1. Traversal   - Accessing each element in the array.
    2. Insertion   - Adding a new element at a specific index.
    3. Deletion    - Removing an element from a specific index.
    4. Searching   - Finding an element (Linear or Binary Search).
    5. Updating    - Changing the value of an element.
*/

int main() {
    // Step 1: Traversal
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5; 

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int pos = 2;
    int value = 25;
    for (int i = n; i > pos - 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;

    cout << "After Insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    pos = 3;
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "After Deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int key = 40;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element " << key << " found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element " << key << " not found." << endl;
    }

    pos = 2;
    arr[pos - 1] = 99;

    cout << "After Update: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
