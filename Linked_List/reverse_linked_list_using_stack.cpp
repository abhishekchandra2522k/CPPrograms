#include <iostream>
#include <stack>

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
    temp->next = head;
    head = temp;
    return;
}

void Print()
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

class Solution
{
public:
    void reverseLL()
    {
        stack<Node *> st;
        Node *temp = head;
        // st.push(head);
        while (temp != NULL)
        {
            st.push(temp);
            temp = temp->next;
        }
        head = st.top();
        st.pop();
        temp = head;
        while (!st.empty())
        {
            temp->next = st.top();
            st.pop();
            temp = temp->next;
        }
        temp->next = NULL;
    }
};

int main()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(8);
    Insert(10);
    Insert(12);
    Print();
    Solution obj;
    obj.reverseLL();
    Print();
    return 0;
}