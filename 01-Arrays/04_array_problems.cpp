#include <iostream>
#include <climits> 
using namespace std;

/*
    Array Problems Overview:
    Arrays are often tested in DSA through small logical problems like:
    - Finding the maximum/minimum element
    - Reversing an array
    - Searching (linear/binary)
    - Summing elements
    - Rotating/shifting elements
    - Detecting duplicates
    - Merging sorted arrays

    Here, we'll implement a few common examples step-by-step.
*/

int findMax(int arr[], int n) {
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int findMin(int arr[], int n) {
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Found at index i
        }
    }
    return -1; // Not found
}

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 5, 40, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    cout << "Maximum Element: " << findMax(arr, n) << endl;
    cout << "Minimum Element: " << findMin(arr, n) << endl;

    cout << "Sum of elements: " << sumArray(arr, n) << endl;

    reverseArray(arr, n);
    cout << "Array after reversing: ";
    printArray(arr, n);

    int key = 40;
    int index = linearSearch(arr, n, key);
    if (index != -1)
        cout << key << " found at index " << index << endl;
    else
        cout << key << " not found in array" << endl;

    return 0;
}

/*
    ✨ Practice Problems:
    
    1. Find the second largest element in the array.
    2. Rotate the array by k positions.
    3. Check if the array is sorted.
    4. Count frequency of each element.
    5. Remove duplicates from a sorted array.

*/
