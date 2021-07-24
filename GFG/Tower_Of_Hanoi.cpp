#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    long long toh(int N, int from, int to, int aux)
    {
        if (N == 1)
        {
            cout << "move disk 1 from rod " << from << " to rod " << to << endl;
            return 1;
        }

        toh(N - 1, from, aux, to);
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        toh(N - 1, aux, to, from);

        return (pow(2, N) - 1);
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
        Solution ob;
        int x = ob.toh(n, 1, 3, 2);
        cout << x;
    }
    return 0;
}