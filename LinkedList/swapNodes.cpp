#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* swapPairs(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* current = dummy;

    while (current->next != NULL && current->next->next != NULL) {
        ListNode* first = current->next;
        ListNode* second = current->next->next;

        // Swapping
        first->next = second->next;
        second->next = first;
        current->next = second;

        // Move to the next pair
        current = first;
    }

    return dummy->next;
}

// Helper function to create a linked list
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

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    ListNode* head = createList(arr, 4);

    cout << "Original List: ";
    printList(head);

    head = swapPairs(head);

    cout << "Swapped Pairs: ";
    printList(head);

    return 0;
}
