#include <iostream>

using namespace std;

int powerOfTwo(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = powerOfTwo(n / 2);
    if (n & 1)
    {
        return 2 * ans * ans;
    }
    else
    {
        return ans * ans;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << powerOfTwo(n);
    return 0;
}