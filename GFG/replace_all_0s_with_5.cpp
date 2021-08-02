#include <bits/stdc++.h>

using namespace std;

int convertFive(int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}

int convertFive(int n)
{
    int count = log10(n) + 1;
    int arr[count];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = n % 10;
        n /= 10;
    }

    for (int i = 0; i < count; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 5;
        }
    }

    reverse(arr, arr + count);
    for (int i = 0; i < count; i++)
    {
        ans = ans * 10 + arr[i];
    }
    return ans;
}