#include <iostream>
using namespace std;
 
struct Node {
    int data;
    Node * next;
    Node(int val)
    {
        data=val;
        next=nullptr;
    }
 };
 void traverse(Node *head)
 {
    Node *temp=head;
    while(temp != nullptr)
    {
        cout << temp->data <<"->";
        temp = temp->next;
    }
     cout << "NULL" << endl;
 }
 int main()
 {
    Node *head = new Node(45);
    head->next=new Node(98);
    head->next->next=new Node(3);
    traverse(head);
    return 0;
 };