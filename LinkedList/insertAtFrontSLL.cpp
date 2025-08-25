#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

void insertAtFront(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    cout << value << " inserted at front.\n";
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
    insertAtFront(head, 10);
    insertAtFront(head, 20);
    insertAtFront(head, 30);
    display(head);
    return 0;
}
