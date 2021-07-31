#include <bits/stdc++.h>

using namespace std;

void moftwo(int x)
{
    cout << x * 2 << " ";
}

class three
{
public:
    void operator()(int x)
    {
        cout << x * 3 << " ";
    }
};

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for_each(arr, arr + 5, moftwo);
    cout << endl;
    three ob1;
    for_each(arr, arr + 5, ob1);

    return 0;
}