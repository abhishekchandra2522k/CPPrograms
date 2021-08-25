#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool hasArrayTwoCandidates(int arr[], int n, int x)
    {
        sort(arr, arr + n);
        int i = 0, j = n - 1;
        while (i < j)
        {
            int sum = arr[i] + arr[j];
            if (sum == x)
            {
                return true;
            }
            else if (sum > x)
            {
                j--;
            }
            else if (sum < x)
            {
                i++;
            }
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