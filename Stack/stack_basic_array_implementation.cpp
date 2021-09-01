#include <iostream>
#define MAX_SIZE 101
using namespace std;

int A[MAX_SIZE];
int top = -1;

void push(int data)
{
    if (top == MAX_SIZE - 1)
    {
        cout << "Error : Stack Overflow" << endl;
    }
    A[++top] = data;
}

void pop()
{
    if (top == -1)
    {
        cout << "Error : Stack Underflow" << endl;
    }
    top--;
}

int Top()
{
    if (top == -1)
    {
        cout << "Stack is Empty";
    }
    return A[top];
}

bool isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    return false;
}

void print()
{
    cout << "Stack : ";
    for (int i = 0; i <= top; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    push(2);
    print();
    push(4);
    print();
    push(6);
    print();
    push(8);
    print();
    cout << "Top:" << Top() << endl;
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    if (isEmpty())
    {
        cout << "Empty";
    }
    else
    {
        cout << "Not Empty";
    }

    return 0;
}