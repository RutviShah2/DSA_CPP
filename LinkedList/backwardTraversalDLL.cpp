#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};
void backwardTraversal(Node *tail) {
    Node *curr = tail;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout << endl;
}
int main() {
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *tail = new Node(3);

    tail->prev = second;
    second->next = tail;
    second->prev =head ;
    head->next = second;

    cout << "Backward Traversal: ";
    backwardTraversal(tail);

    return 0;
}