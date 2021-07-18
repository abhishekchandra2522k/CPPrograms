#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {0, 8, 1, 1, 5, 2, 3, 2, 1, -1};
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            i = -1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}