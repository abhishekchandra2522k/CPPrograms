#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main()
{
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (fact(i) / (fact(j) * fact(i - j))) << "\t";
        }
        cout << endl;
    }
    return 0;
}