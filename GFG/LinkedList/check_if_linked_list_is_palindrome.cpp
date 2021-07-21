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

class Solution
{
public:
    bool isPalindrome(Node *head)
    {
        Node *temp = head;
        vector<int> res;
        while (temp != NULL)
        {
            res.push_back(temp->data);
            temp = temp->next;
        }
        vector<int> check(res);
        reverse(check.begin(), check.end());
        if (res == check)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    int T, i, n, l, firstdata;

    cin >> T;
    while (T--)
    {
        struct Node *head = NULL, *tail = NULL;
        cin >> n;
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        for (i = 1; i < n; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.isPalindrome(head) << endl;
    }
    return 0;
}