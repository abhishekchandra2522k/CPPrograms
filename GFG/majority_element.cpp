#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int majorityElement(int a[], int size)
    {
        if (size == 1)
        {
            return a[0];
        }
        int count = 1;
        int ans = -1;
        for (int i = 1; i < size; i++)
        {
            if (a[i] == a[i - 1])
            {
                count++;
                if (count > size / 2)
                {
                    ans = a[i];
                }
            }
            else
            {
                count = 1;
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.majorityElement(a, n) << endl;
    }
    return 0;
}