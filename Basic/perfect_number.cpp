#include <iostream>

using namespace std;

// A perfect number is one whose sum of divisors is equal to the number itself
class Solution
{
public:
    bool isPerfect(int n)
    {
        int sum = 1;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        if (sum == n)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution ob;
    cout << ob.isPerfect(n) << endl;
    return 0;
}