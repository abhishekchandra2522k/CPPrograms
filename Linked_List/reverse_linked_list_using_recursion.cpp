#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *Insert(Node *head, int data)
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
    return head;
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

void reversePrint(Node *p)
{
    if (p == NULL)
    {
        return;
    }
    reversePrint(p->next);
    cout << p->data << " ";
}

int main()
{
    Node *head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);
    head = Insert(head, 10);
    head = Insert(head, 12);
    Print(head);
    reversePrint(head);
    return 0;
}