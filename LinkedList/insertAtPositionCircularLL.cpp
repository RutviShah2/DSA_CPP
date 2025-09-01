#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtPosition(Node*& head, int value, int pos) {
    if (pos <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) {
        if (pos != 1) {
            cout << "Invalid position! List is empty." << endl;
            delete newNode;
            return;
        }
        newNode->next = newNode; 
        head = newNode;
        return;
    }

    if (pos == 1) {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;

    while (count < pos - 1 && temp->next != head) {
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void display(Node* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* temp = head;
    cout << head->data << " ";
    temp = head->next;

    while (temp != head) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    insertAtPosition(head, 10, 1); 
    insertAtPosition(head, 20, 2); 
    insertAtPosition(head, 30, 3); 
    insertAtPosition(head, 5, 1);  
    insertAtPosition(head, 15, 3);
    display(head); 
    return 0;
}
