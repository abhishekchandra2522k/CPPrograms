#include <iostream>

using namespace std;

int findMax(int, int);

int main()
{
    int a, b, c, max;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Enter third number : ";
    cin >> c;

    max = findMax(a, b);
    max = findMax(max, c);

    cout << "Maximum of a, b and c is " << max << endl;
    return 0;
}

int findMax(int a, int b)
{
    int z = a - b;
    int i = z >> 31;    // next -> i = i & 1;
    return a - (i & z); // or a - (i * z);
}