#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool ispar(string x)
    {
        stack<char> st;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == '[' || x[i] == '{' || x[i] == '(')
            {
                st.push(x[i]);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                if (x[i] == '}')
                {
                    if (st.top() != '{')
                    {
                        return false;
                    }
                    st.pop();
                }
                else if (x[i] == ']')
                {
                    if (st.top() != '[')
                    {
                        return false;
                    }
                    st.pop();
                }
                else if (x[i] == ')')
                {
                    if (st.top() != '(')
                    {
                        return false;
                    }
                    st.pop();
                }
            }
        }
        if (st.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution ob;
        if (ob.ispar(a))
        {
            cout << "balanced" << endl;
        }
        else
        {
            cout << "not balanced" << endl;
        }
    }
    return 0;
}