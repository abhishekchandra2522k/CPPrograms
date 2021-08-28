#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> subarraySum(int arr[], int n, int s)
    {
        vector<int> ans;

        int curr_sum = 0, start = 0;
        for (int i = 1; i <= n; i++)
        {
            while (curr_sum > s && start < i - 1)
            {
                curr_sum -= arr[start];
                start++;
            }

            if (curr_sum == s)
            {
                ans.push_back(start + 1);
                ans.push_back(i);
                return ans;
            }

            if (i < n)
            {
                curr_sum += arr[i];
            }
        }
        ans.push_back(-1);
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
        long long s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        Solution ob;
        vector<int> a;
        a = ob.subarraySum(arr, n, s);
        for (auto i : a)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}