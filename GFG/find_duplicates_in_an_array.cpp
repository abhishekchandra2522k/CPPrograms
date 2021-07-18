#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            arr[arr[i] % n] += n;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 2 * n)
            {
                res.push_back(i);
            }
        }

        if (res.empty())
        {
            res.push_back(-1);
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        vector<int> ans = ob.duplicates(a, n);
        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}