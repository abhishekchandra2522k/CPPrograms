#include <iostream>

using namespace std;

// factorial upto 12 i.e. 479001600

int fact(int n)
{
    cout << "I am calculating F(" << n << ")" << endl;
    if (n == 0)
    {
        return 1;
    }
    int F = n * fact(n - 1);
    cout << "Done ! F(" << n << ") = " << F << endl;
    return F;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}