#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> res;
    vector<int> pattern(int N)
    {
        if (N <= 0)
        {
            res.push_back(N);
        }
        else
        {
            res.push_back(N);
            pattern(N - 5);
            res.push_back(N);
        }
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for (int a : ans)
        {
            cout << a << " ";
        }
        cout << endl;
    }
    return 0;
}