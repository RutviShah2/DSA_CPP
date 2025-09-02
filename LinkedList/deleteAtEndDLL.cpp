#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

void insertAtFront(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    if (head != nullptr) head->prev = newNode;
    head = newNode;
}

void deleteAtEnd(Node* &head) {
    if (head == nullptr) { 
        cout << "List is empty, nothing to delete!" << endl;
        return;
    }

    if (head->next == nullptr) { 
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) { 
        temp = temp->next; 
    }

    temp->prev->next = nullptr; 
    delete temp;
}

void display(Node* head) {
    cout << "Doubly Linked List: ";
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertAtFront(head, 10);
    insertAtFront(head, 20);
    display(head);
    deleteAtEnd(head);
    display(head);
    return 0;
}
