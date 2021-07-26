#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)
    {
        vector<int> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == nums[i + 1])
            {
                i++;
            }
            else if (nums[i] != nums[i + 1])
            {
                res.push_back(nums[i]);
            }
            else if (i == (nums.size() - 1))
            {
                res.push_back(nums[i]);
            }
        }
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(2 * n + 2);
        for (int i = 0; i < 2 * n + 2; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.singleNumber(v);
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}