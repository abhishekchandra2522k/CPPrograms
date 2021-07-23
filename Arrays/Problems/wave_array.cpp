#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void convertToWave(vector<int> &arr, int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                i++;
            }
        }
    }
};

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        ob.convertToWave(a, n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}