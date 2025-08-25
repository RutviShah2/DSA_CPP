#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

void insertAtPosition(Node*& head, int value, int position) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        cout << value << " inserted at position " << position << ".\n";
        return;
    }
    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr) {
        cout << "Invalid position!\n";
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << value << " inserted at position " << position << ".\n";
}
void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int main() {
    Node* head = nullptr;
    insertAtPosition(head, 10, 1); 
    insertAtPosition(head, 20, 2); 
    insertAtPosition(head, 30, 2); 
    insertAtPosition(head, 40, 1); 
    insertAtPosition(head, 50, 10); 
    display(head);
    return 0;
}
