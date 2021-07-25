#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int addRungs(vector<int> &rungs, int dist)
    {
        int n = rungs.size();

        int currentRung = 0;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if ((rungs[i] - currentRung) > dist)
            {
                count += (rungs[i] - currentRung - 1) / dist;
            }
            currentRung = rungs[i];
        }

        return count;
    }
};