#include <iostream>

using namespace std;

int powerOfTwo(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * powerOfTwo(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << powerOfTwo(n);
    return 0;
}