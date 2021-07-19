#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool subArrayExists(int arr[], int n)
    {
        map<int, int> mp;
        int sum = 0;
        bool ans = false;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            arr[i] = sum;
        }
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] >= 2 || arr[i] == 0)
            {
                ans = true;
            }
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        if (ob.subArrayExists(arr, n))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
