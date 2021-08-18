#include <iostream>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    d = d % n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - d; i++)
    {
        arr[i] = arr[i + d];
    }
    int j = 0;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[j];
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Time Complexity : O(n)
// Auxillary Space : O(d)