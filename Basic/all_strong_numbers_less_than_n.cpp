#include <bits/stdc++.h>

using namespace std;

int factorial[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

bool isStrong(int n)
{
    int sum = 0;
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++)
    {
        sum += factorial[s[i] - '0'];
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (isStrong(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}