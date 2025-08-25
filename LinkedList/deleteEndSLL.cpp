#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

Node* deleteEnd(Node* head) {
    if (head == nullptr)
        return nullptr;
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
  Node* second_last = head;
    while (second_last->next->next != nullptr) {
        second_last = second_last->next;
    }
    delete (second_last->next);
    second_last->next = nullptr;

    return head;
}

void printList(Node* curr) {
    while (curr != nullptr) {
      	cout << curr->data << " ";
        curr = curr->next; 
    }
}

int main() {
    Node* head = new Node(3);
    head->next = new Node(12);
    head->next->next = new Node(15);
    head->next->next->next = new Node(18);
    head = deleteEnd(head);
    printList(head);
    return 0;
}