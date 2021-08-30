#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void Insert(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
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

void Delete(int pos)
{
    Node *temp1 = head;
    if (pos == 1)
    {
        head = head->next;
        delete temp1;
        return;
    }
    for (int i = 0; i < pos - 2; i++)
    {
        temp1 = temp1->next;
    }
    // cout << temp1->data << endl;
    // cout<<temp1->data;
    Node *temp2 = temp1->next;
    // cout << temp2->data << endl;
    temp1->next = temp2->next;
    temp2->next = NULL;
    delete temp2;
}

int main()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8); // 2, 4, 6, 8
    Print();
    int pos;
    cout << "Enter position to delete : ";
    cin >> pos;
    Delete(pos);
    Print();
    return 0;
}