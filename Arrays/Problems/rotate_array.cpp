#include <iostream>
using namespace std;

class Solution
{
public:
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void leftRotate(int arr[], int n, int d)
    {
        if (d == 0)
        {
            return;
        }
        d %= n;
        reverse(arr, 0, n - 1);
        reverse(arr, 0, n - d - 1);
        reverse(arr, n - d, n - 1);
    }

    void reverse(int arr[], int l, int e)
    {
        while (l < e)
        {
            swap(&arr[l], &arr[e]);
            l++;
            e--;
        }
    }
};

int main()
{
    //code
    int t, n, d;
    cin >> t;
    while (t--)
    {
        cin >> n >> d;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}