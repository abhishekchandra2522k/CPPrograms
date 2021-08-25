#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool hasArrayTwoCandidates(int arr[], int n, int x)
    {
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(x - arr[i]) != mp.end())
            {
                return true;
            }
            mp[arr[i]]++;
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
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes" : "No") << endl;
    }
    return 0;
}