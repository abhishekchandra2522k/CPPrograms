#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findArea(double A, double B, double C)
    {
        if ((A + B < C) || (A + C < B) || (B + C < A))
        {
            return 0;
        }
        double s = (A + B + C) / 2;

        return sqrt(s * (s - A) * (s - B) * (s - C));
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << fixed << setprecision(3);
        cout << ob.findArea(A, B, C) << endl;
    }
    return 0;
}