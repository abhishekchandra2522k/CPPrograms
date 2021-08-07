#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void binSort(int arr[], int N)
    {
        int l = 0, r = N - 1;
        while (l < r)
        {
            if (arr[l] == 1 && arr[r] == 0)
            {
                swap(arr[l], arr[r]);
                l++;
                r--;
            }
            else if (arr[l] == 0)
            {
                l++;
            }
            else if (arr[r] == 1)
            {
                r--;
            }
        }
    }
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        Solution ob;
        ob.binSort(A, N);
        for (int x : A)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}