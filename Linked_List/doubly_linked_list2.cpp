#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *head;

void InsertAtEnd(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    Node *temp2 = head;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    temp->prev = temp2;
}

void InsertAtBeginning(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void Print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reversePrint()
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    head = NULL;
    InsertAtBeginning(2);
    InsertAtBeginning(0);
    InsertAtEnd(4);
    InsertAtEnd(6);
    InsertAtEnd(8);
    InsertAtEnd(10);
    InsertAtEnd(12);
    Print();
    reversePrint();
    return 0;
}