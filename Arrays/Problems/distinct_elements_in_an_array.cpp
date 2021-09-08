#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    int distinctCount(int arr[], int n)
    {
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(arr[i]) != mp.end())
            {
                continue;
            }
            mp[arr[i]]++;
        }
        return mp.size();
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution obj;
    cout << obj.distinctCount(arr, n);
    return 0;
}