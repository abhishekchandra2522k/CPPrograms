#include <bits/stdc++.h>

using namespace std;

void moftwo(int x)
{
    cout << x * 2 << endl;
}

class three
{
public:
    void mofthree(int x)
    {
        cout << x * 3 << endl;
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for_each(arr, arr + 5, moftwo);

    three ob1;
    for_each(arr, arr + 5, ob1);

    return 0;
}