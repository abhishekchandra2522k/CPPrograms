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

void loopHere(Node *head, Node *tail, int position)
{
    if (position == 0)
    {
        return;
    }
    Node *walk = head;

    for (int i = 0; i < position; i++)
    {
        walk = walk->next;
    }
    tail->next = walk;
}

class Solution
{
public:
    bool detectLoop(Node *head)
    {
        Node *slow = head, *fast = head;
        while (slow && fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return 1;
            }
        }
        return 0;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num;

        cin >> n;
        Node *head, *tail;
        cin >> num;
        head = tail = new Node(num);
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            tail->next = new Node(num);
            tail = tail->next;
        }

        int pos;
        cin >> pos;
        loopHere(head, tail, pos);
        Solution ob;
        if (ob.detectLoop(head))
        {
            cout << "True\n";
        }
        else
        {
            cout << "False\n";
        }
    }
    return 0;
}