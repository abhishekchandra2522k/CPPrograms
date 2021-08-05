#include <iostream>

using namespace std;

class Solution
{
public:
    void segregate0and1(int arr[], int n)
    {
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (arr[i] == 1 && arr[j] == 0)
            {
                swap(arr[i], arr[j]);
                j--;
                i++;
            }
            else if (arr[i] == 0)
            {
                i++;
            }
            else if (arr[j] == 1)
            {
                j--;
            }
        }
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.segregate0and1(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}