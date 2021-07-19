#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}

int transitionPoint(int arr[], int n)
{
    int i = n - 1;
    if (arr[n - 1] == 0)
    {
        return -1;
    }
    while (arr[i] == 1) // or (arr[i] != 0)
    {
        i--;
    }
    return i + 1;
}