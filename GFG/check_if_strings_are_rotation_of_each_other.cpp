#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool areRotations(string s1, string s2)
    {
        if (s1.size() != s2.size())
        {
            return false;
        }
        s1 = s1 + s1;
        size_t found = s1.find(s2);
        if (found != string::npos)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution ob;
        cout << ob.areRotations(s1, s2) << endl;
    }
    return 0;
}