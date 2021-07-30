#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        if (arr[0] == 0)
        {
            return -1;
        }
        if (n == 1)
        {
            return 0;
        }

        if (arr[0] >= n - 1)
        {
            return 1;
        }

        int jump = 1;
        int curr = 0;

        while (curr < n - 1)
        {
            int left = curr + 1;
            int max = -1;
            int right = arr[curr] + curr;
            while (left < n - 1 && left <= right)
            {
                if (max <= arr[left] + left)
                {
                    curr = left;
                    max = arr[left] + left;
                }
                left++;
            }

            if (arr[curr] == 0)
            {
                return -1;
            }

            if (arr[curr] + curr >= n - 1)
            {
                jump++;
                return jump;
            }
        }

        return jump;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.minJumps(arr, n) << endl;
    }
    return 0;
}