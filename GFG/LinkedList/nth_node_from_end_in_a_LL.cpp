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

int getNthFromLast(struct Node *head, int n);

int main()
{
    int T, i, n, l, k;
    cin >> T;
    while (T--)
    {
        Node *head = NULL, *tail = NULL;
        cin >> n >> k;

        int firstdata;
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;

        for (int i = 0; i < n; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }

        cout << getNthFromLast(head, k) << endl;
    }

    return 0;
}

int getNthFromLast(Node *head, int n)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    if (count - n < 0)
    {
        return -1;
    }
    temp = head;
    int check = 0;
    while (temp != NULL)
    {
        check++;
        if (count - n + 1 == check)
        {
            return temp->data;
        }
        temp = temp->next;
    }
    return -1;
}