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
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        sum = sum + fact(temp % 10);
        temp /= 10;
    }

    if (sum == n)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}