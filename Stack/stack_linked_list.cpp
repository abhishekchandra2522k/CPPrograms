#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *top = NULL;

void push(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void pop()
{
    if (top == NULL)
    {
        cout << "Stack Underflow" << endl;
        return;
    }
    Node *temp = top;
    top = top->next;
    temp->next = NULL;
    cout << temp->data << endl;
    free(temp);
}

int top_data()
{
    if (top == NULL)
    {
        cout << "Stack Empty.";
        return 0;
    }
    return top->data;
}

int main()
{
    // push(12);
    // push(11);
    cout << top_data();
    pop();
    pop();
    pop();
    return 0;
}