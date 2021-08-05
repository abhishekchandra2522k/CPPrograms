#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    double areaOfTriangle(double a, double b, double c)
    {
        double s = (a + b + c) / 2;

        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        cout << ob.areaOfTriangle(a, b, c) << endl;
    }
    return 0;
}