#include <iostream>

using namespace std;

int main()
{
    int dec, rem = 0, binary = 0, i = 1;
    cin >> dec;
    while (dec != 0)
    {
        rem = dec % 2;
        dec /= 2;
        binary = binary + rem * i;
        i *= 10;
    }
    cout << binary << endl;
    return 0;
}