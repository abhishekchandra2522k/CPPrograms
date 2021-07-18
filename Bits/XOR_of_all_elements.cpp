#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> getXor(vector<int> A, int N)
    {
        vector<int> res;
        int x = 0;
        for (int i = 0; i < N; i++)
        {
            x ^= A[i];
        }
        for (int i = 0; i < N; i++)
        {
            res.push_back(x ^ A[i]);
        }
        return res;
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
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        Solution ob;
        vector<int> B = ob.getXor(A, N);

        for (int i = 0; i < N; i++)
        {
            cout << B[i] << " ";
        }
        cout << endl;
    }
    return 0;
}