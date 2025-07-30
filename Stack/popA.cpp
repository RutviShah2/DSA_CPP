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
        if (top == 9)
            cout << "Stack Overflow\n";
        else
            stack[++top] = x;
    }

    void pop() {
        if (top == -1)
            cout << "Stack Underflow\n";
        else {
            cout << "Popped: " << stack[top] << endl;
            top--;
        }
    }

    void display() {
        for (int i = 0; i <= top; i++)
            cout << stack[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(100);
    s.push(200);
    s.display();
    s.pop();
    s.display();
    return 0;
}
