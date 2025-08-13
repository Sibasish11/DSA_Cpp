// Creating a Linked List in C++ using user input

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

// Function to create a linked list from user input
Node* createLinkedList(int n) {
    if (n <= 0) return NULL;

    int val;
    cout << "Enter value for node 1: ";
    cin >> val;

    Node* head = new Node(val);
    Node* temp = head;

    // Create remaining nodes
    for (int i = 2; i <= n; i++) {
        cout << "Enter value for node " << i << ": ";
        cin >> val;
        temp->next = new Node(val);
        temp = temp->next;
    }

    return head;
}

// Function to display the linked list
void displayLinkedList(Node* head) {
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node* head = createLinkedList(n);

    displayLinkedList(head);

    return 0;
}

/*
Sample Output:
Enter number of nodes: 3
Enter value for node 1: 10
Enter value for node 2: 20
Enter value for node 3: 30
Linked List: 10 20 30
*/
