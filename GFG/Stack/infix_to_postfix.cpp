#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int prec(char c)
    {
        if (c == '^')
        {
            return 3;
        }
        else if (c == '*' || c == '/')
        {
            return 2;
        }
        else if (c == '-' || c == '+')
        {
            return 1;
        }
        return -1;
    }

    string infixToPostfix(string s)
    {
        stack<char> st;
        string res;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                res = res + s[i];
            }
            else if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (st.top() != '(')
                {
                    res = res + st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while (!st.empty() && prec(s[i]) <= prec(st.top()))
                {
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }

        while (!st.empty())
        {
            res += st.top();
            st.pop();
        }
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.infixToPostfix(s) << endl;
    }
    return 0;
}