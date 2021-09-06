#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool arraySortedOrNot(int arr[], int n)
    {
        if (arr[0] > arr[1])
        {
            return false;
        }
        if (n <= 2)
        {
            return true;
        }
        else if (arr[n - 2] > arr[n - 1])
        {
            return false;
        }
        return arraySortedOrNot(arr, --n);
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
        Solution obj;
        cout << obj.arraySortedOrNot(arr, n) << endl;
    }
    return 0;
}