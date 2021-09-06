#include <iostream>

using namespace std;

bool sortedOrUnsorted(int arr[], int n)
{
    if (n > 4)
    {
        return true;
    }
    else if (arr[n] > arr[n + 1])
    {
        return false;
    }
    sortedOrUnsorted(arr, ++n);
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
    cout << sortedOrUnsorted(arr, 0);
    return 0;
}