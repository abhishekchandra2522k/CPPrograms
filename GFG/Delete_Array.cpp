#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // Declaring dynamic 1D array
        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        // code to delete the array
        // task is to comment the line which deletes
        // the array such that required output is printed
        // delete[] arr;

        cout << sum << endl;
        cout << arr[0] << endl;
    }
    return 0;
}