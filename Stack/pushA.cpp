#include <iostream>
using namespace std;

class StackArray{
int top;
string stack[10];

public:
StackArray()
{
    top=-1;
}

void push(int elements)
{
    if(top==9)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        stack[++top]=elements;
        cout<<"Element pushed: "<<elements<<endl;
    }
}

void showStack()
{
for(int i=0; i<=top; i++)
    {
        cout<<stack[i]<<endl;
    }
}
};
    int main()
    {
        StackArray s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.showStack();
        return 0;
    };