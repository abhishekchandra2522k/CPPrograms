#include <iostream>

using namespace std;

int main()
{
    int a = 1025;
    int *p;
    p = &a;
    cout << "size of integer " << sizeof(int) << endl;
    cout << "address " << p << ", value : " << *p << endl;
    cout << "address " << p + 1 << ", value " << *(p + 1) << endl;
    char *p0;
    p0 = (char *)p;
    cout << "size of char " << sizeof(char) << endl;
    cout << "address " << p0 << ", value " << *p0 << endl;
    cout << "address " << p0 + 1 << ", value " << *(p0 + 1) << endl;
    return 0;
}