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
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp;
    return head;
}

void Print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *Reverse(Node *head)
{
    Node *prev, *current, *next;
    prev = NULL;
    current = head;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
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
    head = Insert(head, 14);
    Print(head);
    head = Reverse(head);
    Print(head);
    return 0;
}