#include <iostream>
using namespace std;

class Stack {
    int top;
    int stack[10];

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top < 9)
            stack[++top] = x;
    }

    void peep(int position) {
        int index = top - position + 1;
        if (index < 0 || index > top)
            cout << "Invalid Position" << endl;
        else
            cout << "Element at position " << position << " from top: " << stack[index] << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.peep(2);
    return 0;
}
