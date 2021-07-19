#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<long long> printFibb(int n)
    {
        vector<long long> ans;
        int a = 0, b = 1, c;
        while (n--)
        {
            ans.push_back(b);
            c = a + b;
            a = b;
            b = c;
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
        int n;
        cin >> n;
        Solution ob;
        vector<long long> ans = ob.printFibb(n);
        for (long long i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}