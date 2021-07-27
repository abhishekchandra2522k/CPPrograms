#include <iostream>
using namespace std;

class Solution
{
public:
    int nthGeekONacci(int a, int b, int c, int n)
    {
        if (n == 1)
        {
            return a;
        }
        else if (n == 2)
        {
            return b;
        }
        else if (n == 3)
        {
            return c;
        }
        return nthGeekONacci(a, b, c, n - 1) + nthGeekONacci(a, b, c, n - 2) + nthGeekONacci(a, b, c, n - 3);
    }
};

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        Solution ob;

        cout << ob.nthGeekONacci(a, b, c, n) << endl;
    }
    return 0;
}