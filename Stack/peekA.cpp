#include <iostream>
using namespace std;

class Stack {
    public:
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

    void peek() {
        if (top == -1)
            cout << "Stack is empty\n";
        else
            cout << "Top element: " << stack[top] << endl;
    }
};

int showStack(Stack &s) {
    for (int i = 0; i <= s.top; i++)
        cout << s.stack[i] << " ";
    cout << endl;
}

int main() {
    Stack s;
    s.push(10);
    s.push(50);
    showStack(s);
    s.peek();
    return 0;
}
