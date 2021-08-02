#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void reverseInGroups(vector<long long> &arr, int n, int k)
    {
        // code here
        // for(int i = 0; i < n; i+= k){
        //     int l = i;
        //     int e = min(i + k - 1, n - 1);

        //     while(l < e){
        //         swap(arr[l++], arr[e--]);
        //     }
        // }
        if (k >= n)
        {
            reverse(arr.begin(), arr.end());
            return;
        }
        int i = 0;
        while (i < n)
        {
            if (i + k >= n)
            {
                reverse(arr.begin() + i, arr.end());
            }
            else
            {
                reverse(arr.begin() + i, arr.begin() + i + k);
            }
            i += k;
        }
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
        vector<long long> arr;
        int k;
        cin >> k;
        for (long long i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            arr.push_back(x);
        }

        Solution ob;
        ob.reverseInGroups(arr, n, k);
        for (long long i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}