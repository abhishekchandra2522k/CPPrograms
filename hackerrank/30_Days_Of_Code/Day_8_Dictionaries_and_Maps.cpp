#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n;
    cin >> n;
    map<string, long long> mp;
    for (int i = 0; i < n; i++)
    {
        long long x;
        string name;
        cin >> name;
        cin >> x;
        mp.insert({name, x});
    }
    string query;
    while (cin >> query)
    {
        if (mp.find(query) != mp.end())
        {
            cout << query << "=" << mp[query] << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
    return 0;
}