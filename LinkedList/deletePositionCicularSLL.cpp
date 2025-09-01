#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void deleteAtPosition(Node*& head, int pos) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    if (pos == 1) {
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

        head = head->next;     // move head forward
        last->next = head;     // update last's link
        delete temp;           // delete old head
        return;
    }

    Node* temp = head;
    int count = 1;

    while (count < pos - 1 && temp->next != head) {
        temp = temp->next;
        count++;
    }

    if (temp->next == head) {
        cout << "Invalid position!" << endl;
        return;
    }

    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
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

    // create circular list manually
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};
    Node* n4 = new Node{40, nullptr};

    head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = head; // circular link

    cout << "Original list: ";
    display(head);

    deleteAtPosition(head, 1); // delete first
    cout << "After deleting pos 1: ";
    display(head);

    return 0;
}
