#include <iostream>
#define MAX_SIZE 101
using namespace std;

int A[MAX_SIZE];
int front = -1;
int rear = -1;

bool isEmpty()
{
    if (front == rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void EnQueue(int data)
{
    if (rear == MAX_SIZE - 1)
    {
        cout << "Queue Full" << endl;
        return;
    }
    else if (isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    A[rear] = data;
}

void DeQueue()
{
    if (isEmpty())
    {
        cout << "Queue is Empty";
        return;
    }
    else if (front == rear)
    {
        cout << A[front] << endl;
        front = rear = -1;
    }
    else
    {
        front++;
        cout << A[front] << endl;
    }
}

int main()
{
    EnQueue(2);
    EnQueue(4);
    EnQueue(6);
    EnQueue(8);
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    EnQueue(1);
    EnQueue(3);
    EnQueue(5);
    EnQueue(7);
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    return 0;
}