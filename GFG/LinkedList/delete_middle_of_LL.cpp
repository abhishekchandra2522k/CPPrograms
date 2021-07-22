#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Node *deleteMid(struct Node *head);

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int data;
        cin >> data;

        Node *head = new Node(data);

        Node *tail = head;

        for (int i = 0; i < n; i++)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        head = deleteMid(head);

        printList(head);
    }
    return 0;
}

Node *deleteMid(Node *head)
{

    if (head == NULL)
    {
        return 0;
    }
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    Node *del;
    int mid = (count / 2) + 1;
    temp = head;
    int check = 1;
    while (temp != NULL)
    {
        check++;
        if (check == mid)
        {
            del = temp->next;
            temp->next = temp->next->next;
            del->next = NULL;
            free(del);
            break;
        }
        temp = temp->next;
    }

    return head;
}