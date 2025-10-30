/*
Problem: delete node from a particular poaition in a linked list
*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node* deleteNode(Node* head, int x) {
    if (head == NULL) return NULL; // empty list

    if (x == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    x--;
    Node* curr = head;
    Node* prev = NULL;

    while (x-- && curr != NULL) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL) return head; // x > length of list

    prev->next = curr->next;
    delete curr;

    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create Linked List: 10 -> 20 -> 30 -> 40 -> 50
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Original List: ";
    printList(head);

    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;

    head = deleteNode(head, pos);

    cout << "List after deletion: ";
    printList(head);

    return 0;
}
