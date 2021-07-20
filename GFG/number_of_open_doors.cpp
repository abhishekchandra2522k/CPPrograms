#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int nOfOpenDoors(long long N)
    {
        return sqrt(N);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.nOfOpenDoors(N);
        cout << endl;
    }

    return 0;
}