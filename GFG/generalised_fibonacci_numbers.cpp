#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    long long multiply(long long a[3][3], long long b[3][3], long long m)
    {
        long long c[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < 3; k++)
                {
                    c[i][j] += (a[i][k] * b[k][j]) % m;
                }
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = c[i][j];
            }
        }
    }

    long long power(long long F[3][3], long long n, long long M[3][3], long long m)
    {
        if (n == 1)
        {
            return F[0][0] + F[0][1] + F[0][2];
        }

        power(F, n / 2, M, m);

        multiply(F, F, m);

        if (n % 2 != 0)
        {
            multiply(F, M, m);
        }

        return F[0][0] + F[0][1] + F[0][2];
    }

    long long getFibNum(long long a, long long b, long long c, long long n, long long m)
    {
        long long F[3][3] = {{a, b, c}, {1, 0, 0}, {0, 0, 1}};
        long long M[3][3] = {{a, b, c}, {1, 0, 0}, {0, 0, 1}};

        if (n == 0)
        {
            return 0;
        }
        if (n == 1 || n == 2)
        {
            return 1 % m;
        }

        return power(F, n - 2, M, m) % m;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, n, m;
        cin >> a >> b >> c >> n >> m;
        Solution ob;

        cout << ob.getFibNum(a, b, c, n, m) << endl;
    }
    return 0;
}
