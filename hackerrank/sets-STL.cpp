#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int n, val, x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        cin >> x;
        if (val == 1)
        {
            s.insert(x);
        }
        else if (val == 2)
        {
            if (s.find(x) != s.end())
            {
                s.erase(x);
            }
        }
        else if (val == 3)
        {
            if (s.find(x) == s.end())
            {
                cout << "No" << endl;
            }
            else if (s.find(x) != s.end())
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
