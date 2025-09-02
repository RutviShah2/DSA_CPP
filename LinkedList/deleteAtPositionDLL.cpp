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

void deleteAtFront(Node* &head) {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete!" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    if (head != nullptr) head->prev = nullptr;
    delete temp;
}

void deleteAtEnd(Node* &head) {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete!" << endl;
        return;
    }
    if (head->next == nullptr) { // only one node
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) temp = temp->next;
    temp->prev->next = nullptr;
    delete temp;
}

void deleteAtPosition(Node* &head, int pos) {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete!" << endl;
        return;
    }
    if (pos == 1) {
        deleteAtFront(head);
        return;
    }
    Node* temp = head;
    int count = 1;
    while (temp != nullptr && count < pos) {
        temp = temp->next;
        count++;
    }
    if (temp == nullptr) {
        cout << "Position out of range!" << endl;
        return;
    }
    if (temp->next == nullptr) { // last node
        deleteAtEnd(head);
        return;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
}

void display(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertAtFront(head, 10);
    deleteAtFront(head);
    display(head); 
    deleteAtEnd(head);
    display(head);
    deleteAtPosition(head, 2);
    display(head);
    return 0;
}
