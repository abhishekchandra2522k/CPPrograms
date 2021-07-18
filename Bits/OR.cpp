#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int orGate(vector<int> arr, int N)
    {
        int x = arr[0];
        for (int i = 0; i < N; i++)
        {
            x |= arr[i];
        }
        return x;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> v;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        Solution ob;
        cout << ob.orGate(v, N) << endl;
    }
    return 0;
}