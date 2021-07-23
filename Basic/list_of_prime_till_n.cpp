#include <iostream>

using namespace std;

int main()
{
    int n, count, c, i = 3;
    cin >> n;

    if (n >= 1)
    {
        cout << 2 << " ";
    }

    for (count = 2; count <= n; i++)
    {
        for (c = 2; c < i; c++)
        {
            if (i % c == 0)
                break;
        }

        if (c == i)
        {
            cout << i << " ";
            count++;
        }
    }
    return 0;
}