#include <iostream>
#include <stack>

using namespace std;

class Solution
{
public:
    int postfixEvaluation(string s)
    {
        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
            {
                int y = st.top();
                st.pop();
                int x = st.top();
                st.pop();
                if (s[i] == '*')
                {
                    st.push(x * y);
                }
                else if (s[i] == '-')
                {
                    st.push(x - y);
                }
                else if (s[i] == '+')
                {
                    st.push(x + y);
                }
                else if (s[i] == '/')
                {
                    st.push(x / y);
                }
            }
            else
            {
                int x = s[i] - '0';
                st.push(x);
            }
        }
        return st.top();
    }
};

int main()
{
    string s;
    getline(cin, s);
    Solution obj;
    cout << obj.postfixEvaluation(s);
    return 0;
}