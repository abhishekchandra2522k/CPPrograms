#include <iostream>
#include <numeric>
using namespace std;

#define ll long long

int main()
{
    ll n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }
    cout << (n * (n + 1)) / 2 - sum;
    return 0;
}