#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int isPossible(int N, int arr[])
    {
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += arr[i];
        }

        if (sum % 3 == 0)
        {
            return 1;
        }

        return 0;
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
        cout << ob.isPossible(n, arr) << endl;
    }
    return 0;
}