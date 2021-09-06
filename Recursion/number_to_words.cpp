#include <iostream>

using namespace std;

void words(int n)
{
    int x = n % 10;
    if (n == 0)
    {
        return;
    }
    words(n / 10);
    if (x == 0)
    {
        cout << "Zero ";
    }
    else if (x == 1)
    {
        cout << "One ";
    }
    else if (x == 2)
    {
        cout << "Two ";
    }
    else if (x == 3)
    {
        cout << "Three ";
    }
    else if (x == 4)
    {
        cout << "Four ";
    }
    else if (x == 5)
    {
        cout << "Five ";
    }
    else if (x == 6)
    {
        cout << "Six ";
    }
    else if (x == 7)
    {
        cout << "Seven ";
    }
    else if (x == 8)
    {
        cout << "Eight ";
    }
    else if (x == 9)
    {
        cout << "Nine ";
    }
}

int main()
{
    int n;
    cin >> n;
    words(n);
    return 0;
}