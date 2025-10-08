#include <iostream>
using namespace std;

#define maxstk 10
int top = -1;
int Stack[maxstk];

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty!" << endl;
        return;
    }
    for (int i = 0; i <= top; i++)
    {
        cout << Stack[i] << " ";
    }
    cout << endl;
}

void push(int value)
{
    if (top == maxstk - 1)
    {
        cout << "Overflow!" << endl;
    }
    else
    {
        top++;
        Stack[top] = value;
        cout << value << " inserted into the stack" << endl;
        cout << "Stack Elements: ";
        display();
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Underflow!" << endl;
    }
    else
    {
        int value = Stack[top];
        top--;
        cout << value << " deleted from the stack" << endl;
        cout << "Stack Elements: ";
        display();
    }
}

int main()
{

    push(20);
    push(30);
    push(40);

    pop();
    pop();

    return 0;
}