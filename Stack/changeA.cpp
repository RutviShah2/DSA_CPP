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

    void change(int position, int newValue) {
        int index = top - position + 1;
        if (index < 0 || index > top)
            cout << "Invalid Position" << endl;
        else {
            cout << "Changed element " << stack[index] << " to " << newValue << endl;
            stack[index] = newValue;
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
    s.push(5);
    s.push(15);
    s.push(25);
    s.display();
    s.change(2, 50);
    s.display();
    return 0;
}
