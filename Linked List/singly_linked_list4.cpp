#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void Insert(Node **head, int x, int pos)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if (pos == 1)
    {
        temp->next = *head;
        *head = temp;
        return;
    }
    Node *temp2 = *head;
    for (int i = 0; i < pos - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}

void Print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    Insert(&head, 2, 1); // List : 2
    Insert(&head, 3, 2); // List : 2 3
    Insert(&head, 4, 1); // List : 4 2 3
    Insert(&head, 5, 2); // List : 4 5 2 3
    Print(head);
    return 0;
}