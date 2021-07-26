#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> mp;
    string x;
    int n, val;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        cin >> x;

        if (val == 1)
        {
            int y;
            cin >> y;
            mp[x] += y;
        }
        else if (val == 2)
        {
            mp.erase(x);
        }
        else if (val == 3)
        {
            cout << mp[x] << endl;
        }
    }

    return 0;
}
