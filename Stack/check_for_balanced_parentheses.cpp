#include <iostream>
#include <stack>

using namespace std;

class Solution
{
public:
    int checkForBalancedParentheses(string s)
    {
        stack<char> st;
        if (s.empty())
        {
            return true;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (s[i] == ')')
                {
                    if (st.top() != '(')
                    {
                        return false;
                    }
                    st.pop();
                }
                else if (s[i] == '}')
                {
                    if (st.top() != '{')
                    {
                        return false;
                    }
                    st.pop();
                }
                else if (s[i] == ']')
                {
                    if (st.top() != '[')
                    {
                        return false;
                    }
                    st.pop();
                }
            }
        }
        return st.empty() ? true : false;
    }
};

int main()
{
    string s;
    getline(cin, s);
    Solution obj;
    if (obj.checkForBalancedParentheses(s))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not Balanced" << endl;
    }
    return 0;
}