#include <iostream>

using namespace std;

int main()
{
    bool a = true;
    bool *p;
    p = &a;
    // pointer arithmetic
    cout << "Address p is " << p << endl;
    cout << "value at address p is " << *p << endl;
    cout << "size of bool is " << sizeof(bool) << endl;
    cout << "address p + 1 is " << p + 1 << endl;
    cout << "value at p + 1 is " << *(p + 1) << endl;
    return 0;
}