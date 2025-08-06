#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    ListNode* fast = dummy;
    ListNode* slow = dummy;

    for (int i = 0; i <= n; ++i) {
        fast = fast->next;
    }

    while (fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    ListNode* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    return dummy->next;
}

// Helper function to print the list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a list from an array
ListNode* createList(int arr[], int size) {
    if (size == 0) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < size; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 2;  // Remove 2nd node from the end

    ListNode* head = createList(arr, 5);
    cout << "Original List: ";
    printList(head);

    head = removeNthFromEnd(head, n);

    cout << "Modified List: ";
    printList(head);

    return 0;
}
