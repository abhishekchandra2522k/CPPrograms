#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void Insert(Node **head, int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if (*head != NULL)
    {
        temp->next = *head;
        *head = temp;
    }
    *head = temp;
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
    int n;
    cout << "How many numbers? : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter data : ";
        cin >> x;
        Insert(&head, x);
        cout << "List is : ";
        Print(head);
        cout << endl;
    }
    return 0;
}