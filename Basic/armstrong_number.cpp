#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    int count = ceil(log10(n));
    cout << count << endl;
    int sum = 0;
    while (temp > 0)
    {
        sum = sum + pow(temp % 10, count);
        temp = temp / 10;
    }
    if (sum == n)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }

    return 0;
}