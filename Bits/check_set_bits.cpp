#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int isBitSet(int N)
    {
        return !(N & (N + 1));
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
        Solution ob;
        cout << ob.isBitSet(N) << endl;
    }
    return 0;
}