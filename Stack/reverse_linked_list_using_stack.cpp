#include <iostream>
#include <stack>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;

void reverseLinkedListUsingStack()
{
    stack<Node *> st;
    Node *temp = head;
    while (temp != NULL)
    {
        st.push(temp);
        temp = temp->next;
    }
    head->next = NULL;
    head = st.top();
    st.pop();
    Node *temp2 = head;
    while (!st.empty())
    {
        temp2->next = st.top();
        st.pop();
        temp2 = temp2->next;
    }
}

void InsertAtBeginning(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

void print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    head = NULL;
    InsertAtBeginning(10);
    InsertAtBeginning(8);
    InsertAtBeginning(6);
    InsertAtBeginning(4);
    InsertAtBeginning(2);
    print();
    reverseLinkedListUsingStack();
    print();
    return 0;
}