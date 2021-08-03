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
};

bool areIdentical(struct Node *a, struct Node *b);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, tmp, d1, d2;
        struct Node *head1 = NULL, *tail1 = NULL;
        struct Node *head2 = NULL, *tail2 = NULL;
        cin >> n1;
        cin >> d1;
        head1 = new Node(d1);
        tail1 = head1;

        while (n1-- > 1)
        {
            cin >> tmp;
            tail1->next = new Node(tmp);
            tail1 = tail1->next;
        }
        cin >> n2;
        cin >> d2;
        head2 = new Node(d2);
        tail2 = head2;

        while (n2-- > 1)
        {
            cin >> tmp;
            tail2->next = new Node(tmp);
            tail2 = tail2->next;
        }
        areIdentical(head1, head2) ? cout << "Identical" << endl : cout << "Not Identical" << endl;
    }
    return 0;
}

bool areIdentical(struct Node *head1, struct Node *head2)
{
    bool flag = true;
    Node *temp1 = head1, *temp2 = head2;
    while (temp1 && temp2)
    {
        if (temp1->data != temp2->data)
        {
            flag = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return flag;
}