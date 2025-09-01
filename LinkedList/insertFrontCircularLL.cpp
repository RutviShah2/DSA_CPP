#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertFront(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) { 
        newNode->next = newNode;
        head = newNode;
    } 
    else {
        Node* temp = head;
        while (temp->next != head) 
        {
            temp = temp->next;
        }
        newNode->next = head;  
        temp->next = newNode;  
        head = newNode;       
    }
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

    insertFront(head, 10);
    insertFront(head, 20);
    insertFront(head, 30);

    display(head); 

    return 0;
}
