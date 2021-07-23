#include <bits/stdc++.h>

using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;

public:
    MyStack()
    {
        top = -1;
    }
    int pop();
    void push(int);
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        MyStack *sq = new MyStack();

        int Q;
        cin >> Q;
        while (Q--)
        {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1)
            {
                int data;
                cin >> data;
                sq->push(data);
            }
            else if (QueryType == 2)
            {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
    }
};

void MyStack ::push(int x)
{
    arr[top++] = x;
}

int MyStack ::pop()
{
    if (top < 0)
    {
        return -1;
    }
    return arr[top--];
}