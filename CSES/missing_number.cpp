#include <iostream>
#include <numeric>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[n - 1];
    for (long long i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    long long sum = n * (n + 1) / 2;
    long long asum = accumulate(a, a + n - 1, 0);
    cout << sum - asum;
    return 0;
}