#include <iostream>
#include <stack> // using the stack STL
using namespace std;

class Solution
{
public:
    string reverseStringUsingStack(string str)
    {
        stack<char> st;
        for (int i = 0; i < str.size(); i++)
        {
            st.push(str[i]);
        }
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = st.top();
            st.pop();
        }
        return str;
    }
};

int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;
    Solution obj;
    cout << obj.reverseStringUsingStack(str) << endl;
    return 0;
}