#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int evaluatePostfix(string S)
    {
        stack<int> st;
        for (int i = 0; S[i]; i++)
        {
            if (isdigit(S[i]))
            {
                st.push(S[i] - '0'); // S[i] - '0' converts the char into int
            }
            else
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                if (S[i] == '+')
                {
                    st.push(y + x);
                }
                else if (S[i] == '-')
                {
                    st.push(y - x);
                }
                else if (S[i] == '*')
                {
                    st.push(y * x);
                }
                else if (S[i] == '/')
                {
                    st.push(y / x);
                }
            }
        }
        return st.top();
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
        cout << ob.evaluatePostfix(s) << endl;
    }
    return 0;
}