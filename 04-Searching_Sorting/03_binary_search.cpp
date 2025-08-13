// Demonstration of Binary Search in C++
// Time Complexity: O(log N) - array is divided into halves each step
// Space Complexity: O(1) - no extra space used
// Note: Works only on a sorted array

#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Prevents integer overflow

        if (arr[mid] == target) {
            return mid; // Found
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Search right half
        }
        else {
            right = mid - 1; // Search left half
        }
    }
    return -1; 

int main() {
    int n;
    cout << "Enter number of elements (sorted order): ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int index = binarySearch(arr, n, target);

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
