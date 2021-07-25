#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int eliminateMaximum(vector<int> &dist, vector<int> &speed)
    {
        vector<double> t;
        for (int i = 0; i < dist.size(); i++)
        {
            t.push_back((double)dist[i] / (double)speed[i]);
        }
        sort(t.begin(), t.end());
        int count = 0;
        int time = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] > time)
            {
                count++;
                time++;
            }
            else if (t[i] <= time)
            {
                break;
            }
        }
        return count;
    }
};