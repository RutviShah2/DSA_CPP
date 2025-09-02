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

void insertAtPosition(Node* &head, int val, int pos) {
    Node* newNode = new Node(val);

    if (pos == 1) { 
        newNode->next = head;
        if (head != nullptr) head->prev = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < pos - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr || temp->next == nullptr) {
        if (temp != nullptr) {
            temp->next = newNode;
            newNode->prev = temp;
        } else {
            head = newNode;
        }
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertAtPosition(head, 15, 2); 
    insertAtPosition(head, 5, 1);  
    insertAtPosition(head, 25, 10); 
    display(head);
    return 0;
}
