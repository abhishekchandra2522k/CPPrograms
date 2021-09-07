#include <iostream>

using namespace std;

bool sortedOrUnsorted(int arr[], int n, int size)
{
    if (n > size - 1)
    {
        return true;
    }
    else if (arr[n] > arr[n + 1])
    {
        return false;
    }
    sortedOrUnsorted(arr, ++n, size);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sortedOrUnsorted(arr, 0, n);
    return 0;
}