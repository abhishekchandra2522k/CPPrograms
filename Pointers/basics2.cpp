#include <iostream>

using namespace std;

int main()
{
    int a;
    int *p = &a;
    a = 10;
    cout << "a = " << a << endl;
    *p = 12;
    cout << "a = " << a << endl;
    cout << "&p = " << &p << endl;
    cout << "p = " << p << endl;
    int b = 20;
    *p = b;
    p = &b;
    cout << "p = " << p << endl;
    cout << "&b = " << &b << endl;
    cout << "&p = " << &p << endl;
    cout << "&a = " << &a << endl;
    cout << "*p = " << *p << endl;
    cout << "a = " << a << endl;
    return 0;
}