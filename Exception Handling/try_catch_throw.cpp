#include <iostream>
#include <string>
using namespace std;

int main()
{
    try
    {
        int motherAge = 39;
        int sonAge = 41;
        if (motherAge < sonAge)
        {
            throw false;
        }
    }
    catch (bool x)
    {
        cout << x;
    }
    return 0;
}