#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteFront(Node*& head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    if (head->next == head) {
        delete head;
        head = NULL;
        return;
    }
    
    Node* temp = head;
    Node* last = head;

    while (last->next != head) {
        last = last->next;
    }

    head = head->next;  
    last->next = head;    
    delete temp;         
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
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = head; 

    cout << "Original list: ";
    display(head);

    deleteFront(head);
    cout << "After deleting front: ";
    display(head);

    return 0;
}
