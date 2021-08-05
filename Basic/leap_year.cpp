#include <iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;
    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "YES" << endl;
    }
    else if (year % 400 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}