#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stack<char> st;
        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '.')
            {
                st.push(s[i]);
            }
            else if (s[i] == '.')
            {
                while (!st.empty())
                {
                    ans.push_back(st.top());
                    st.pop();
                }
                ans.push_back('.');
            }
        }
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.reverseWords(s) << endl;
    }
    return 0;
}