#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int thirdLargest(int a[], int n)
    {
        int first = -1, second = -1, third = -1;
        for (int i = 0; i < n; i++)
        {
            if (first < a[i])
            {
                third = second;
                second = first;
                first = a[i];
            }
            else if (second < a[i])
            {
                third = second;
                second = a[i];
            }
            else if (third < a[i])
            {
                third = a[i];
            }
        }
        return third;
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
        cout << ob.thirdLargest(a, n) << endl;
    }
    return 0;
}