#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class doublyList{
    Node* head;
    Node* tail;
    public:
    doublyList(){
        head = tail = NULL;
    }
};

void insert(Node*& head , int pos , int val) {
    if(pos < 1) {
        cout << "invalid";
        return;
    }
    Node* newNode = new Node(val);
    if(pos == 1) {
        newNode->next = head;
        if(head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }
    Node* temp = head;

    for(int i = 1; i < pos-1; i++) {
        temp = temp->next;
    }
    if(temp == NULL) {
        cout << "Invalid";
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;

}

void reverse(Node*& head) {
    if(head == NULL) {
        return;
    }
    Node* prev = NULL;
    Node* curr = head;
   // Node* nextNode = head->next;

    while(curr != NULL) {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;

        curr = curr->prev;

        if(prev != NULL) {
            head = prev->prev;
        }
    }
}

void display(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main() {
  Node* head = NULL;

    // Create initial list: 1, 2, 3, 4, 5
    for (int i = 1; i <= 5; i++) {
        insert(head, i, i);
    }

    cout << "Original list: ";
    display(head);

    // int pos = 3;
    // int val = 6;

    // insert(head, pos, val);

    reverse(head);

    cout << "After insertion: ";
    display(head);

    // Free memory
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
