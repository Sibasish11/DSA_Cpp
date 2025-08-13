// Demonstrating insertion operations in a linked list

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert at the beginning
void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

// Insert at the end
void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert at a specific position (1-based index)
void insertAtPosition(Node*& head, int val, int pos) {
    if (pos <= 1) {
        insertAtBeginning(head, val);
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of range. Inserting at end.\n";
        insertAtEnd(head, val);
        return;
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;
}

// Display linked list
void displayLinkedList(Node* head) {
    cout << "Linked List: ";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    // Insert operations
    insertAtBeginning(head, 10);
    insertAtEnd(head, 30);
    insertAtPosition(head, 20, 2);  // Insert at position 2
    insertAtEnd(head, 40);
    insertAtPosition(head, 5, 1);   // Insert at beginning

    // Display final list
    displayLinkedList(head);

    return 0;
}

/*
Sample Output:
Linked List: 5 10 20 30 40
*/
