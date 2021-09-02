#include <iostream>
#include <stack>

using namespace std;

class Solution
{
public:
    int prefixEvaluation(string s)
    {
        stack<int> st;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                if (s[i] == '*')
                {
                    st.push(x * y);
                }
                else if (s[i] == '/')
                {
                    st.push(x / y);
                }
                else if (s[i] == '+')
                {
                    st.push(x + y);
                }
                else if (s[i] == '-')
                {
                    st.push(x - y);
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
    cout << obj.prefixEvaluation(s) << endl;
    return 0;
}