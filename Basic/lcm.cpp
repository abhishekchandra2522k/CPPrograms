#include <iostream>

using namespace std;

int main()
{
    int low, a, b, lcm;
    cin >> a >> b;
    low = a < b ? a : b;

    while (1)
    {
        if (low % a == 0 && low % b == 0)
        {
            lcm = low;
            break;
        }
        low++;
    }

    cout << lcm << endl;
    return 0;
}