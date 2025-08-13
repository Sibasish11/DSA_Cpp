// Introduction to Linked List in C++

// A Linked List is a linear data structure where elements (nodes) are connected
// using pointers. Unlike arrays, elements are not stored in contiguous memory.
// Each node contains:
// 1. Data (value)
// 2. Pointer to the next node

#include <iostream>
using namespace std;

// Structure of a Node
struct Node {
    int data;      // Stores the data
    Node* next;    // Pointer to the next node

    // Constructor for creating a new node
    Node(int val) {
        data = val;
        next = NULL;
    }
};

int main() {
    // Creating nodes manually
    Node* head = new Node(10);   // First node (head)
    Node* second = new Node(20); // Second node
    Node* third = new Node(30);  // Third node

    // Linking nodes together: head -> second -> third
    head->next = second;
    second->next = third;

    // Traversing the linked list
    cout << "Linked List elements: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Output: Linked List elements: 10 20 30
    return 0;
}

/*
Advantages of Linked List:
- Dynamic size (can grow/shrink at runtime)
- Efficient insertions/deletions (no shifting like arrays)

Disadvantages:
- Uses extra memory for pointers
- No direct access to elements (must traverse from head)

*/
