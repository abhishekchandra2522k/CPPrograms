#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
} * head;

Node *findNode(Node *head, int search_for)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == search_for)
        {
            break;
        }
        current = current->next;
    }
    return current;
}

void insert()
{
    int n, i, value;
    Node *temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);

        if (i == 0)
        {
            head = new Node(value);
            temp = head;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

void printList(Node *node)
{
    while (node != NULL)
    {
        printf("%d", node->data);
        node = node->next;
    }
    cout << endl;
}

class Solution
{
public:
    void deleteNode(Node *del)
    {
        Node *temp = del;
        temp->data = temp->next->data;
        del = del->next;
        temp->next = temp->next->next;
        del->next = NULL;
        free(del);
    }
};