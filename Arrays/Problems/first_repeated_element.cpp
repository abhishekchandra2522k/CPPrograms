#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int firstRepeated(int arr[], int n)
    {
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i]] >= 2)
            {
                return i + 1;
            }
        }

        return -1;
        // BRUTE FORCE APPROACH
        // int ans = -1;
        // for (int i = 0; i < n - 1; i++)
        // {
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if (arr[i] == arr[j])
        //         {
        //             ans = i + 1;
        //             break;
        //         }
        //     }
        //     if (ans != -1)
        //     {
        //         break;
        //     }
        // }
        // return ans;
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
        cout << ob.firstRepeated(arr, n) << endl;
    }
    return 0;
}