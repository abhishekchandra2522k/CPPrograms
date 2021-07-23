#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int gcd(int arr[], int N)
    {
        int ans = arr[0];
        for (int i = 1; i < N; i++)
        {
            ans = calc_gcd(ans, arr[i]);
        }
        return ans;
    }

    int calc_gcd(int a, int b)
    {
        while (a && b)
        {
            if (a < b)
            {
                a = a % b;
            }
            else
            {
                b = b % a;
            }
        }
        return a + b;
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
        cout << ob.gcd(arr, n) << endl;
    }
    return 0;
}