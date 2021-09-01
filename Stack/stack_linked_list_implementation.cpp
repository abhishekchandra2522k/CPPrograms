#include <iostream>

using namespace std;

// Linked List can be of any size, we do not have to declare a MAX_SIZE for LL
// No Stack Overflow Condition
struct Node
{
    int data;
    Node *next;
};

Node *top = NULL;

void push(int data)
{ // Insertion at the beginning of the LL
    Node *temp = new Node();
    temp->data = data;
    // temp->next = NULL;
    // if (top == NULL)
    // {
    //     top = temp;
    //     return;
    // }
    temp->next = top;
    top = temp;
}

void pop()
{ // Deletion of a Node from Beginning
    if (top == NULL)
    {
        cout << "Error : Stack Underflow." << endl;
    }
    Node *temp = top;
    top = top->next;
    delete temp;
}

int Top()
{ // returns head node of LL
    if (top == NULL)
    {
        cout << "Stack Underflow." << endl;
    }
    return top->data;
}

bool isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    return false;
}

void print()
{
    Node *temp = top;
    cout << "Stack : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
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
    cout << "Top : " << Top() << endl;
    cout << "Popping" << endl;
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