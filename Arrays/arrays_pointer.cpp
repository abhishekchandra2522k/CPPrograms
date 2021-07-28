#include <iostream>

using namespace std;

int main()
{
    int a[] = {5, 8, 7, 8, 9};
    int *p;
    p = a; // Valid in case of arrays but not valid in case of single integer values.
    cout << &a[0] << " "
         << p << " "
         << a << " "
         << &a << endl; // All prints the base address of an array

    for (int i = 0; i < 5; i++)
    {
        cout << &a[i] << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        // Accessing array elements through pointer a[i] = *(a+i) or *(p+i) or *(i+a) or i[a]
        cout << *(a + i) << " " << *(p + i) << " " << i[a] << endl;
        cout << &p[i] << endl;
    }
    cout << 2 [a] << endl;

    cout << &a + 1 << endl;   // Gives address of next byte after array's last element
    cout << *(a + 1) << endl; // gives value at index 1
    cout << *a + 1 << endl;   // gives value at index 0 + 1
    cout << (*p / 2) << endl; // gives value at index 0 / 2

    return 0;
}