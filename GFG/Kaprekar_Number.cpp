#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int isKaprekar(int N)
    {
        if (N == 1)
        {
            return 1;
        }
        long long sqr = N * N;
        long long div = 1;
        long long temp = sqr / 10;
        while (temp != 0)
        {
            div *= 10;
            if (div == N)
            {
                continue;
            }
            if (((sqr % div) + (sqr / div)) == N)
            {
                return 1;
            }
            temp /= 10;
        }
        return 0;
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isKaprekar(N) << endl;
    }
    return 0;
}