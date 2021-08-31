#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void *Insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return head;
    }
    Node *temp2 = head;
    while ((*temp2).next != NULL)
    {
        temp2 = (*temp2).next;
    }
    temp2->next = temp;
}

void Print(Node *p)
{
    if (p == NULL)
    {
        cout << endl;
        return;
    }
    cout << p->data << " ";
    Print(p->next);
}

void reverseLL(Node *p)
{
    if (p->next == NULL)
    {
        head = p;
        return;
    }
    reverseLL(p->next);
    // Node *q = p->next;
    p->next->next = p;
    // q->next = p;
    p->next = NULL;
}

int main()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8);
    Insert(10);
    Insert(12);
    Print(head);
    reverseLL(head);
    Print(head);
    return 0;
}