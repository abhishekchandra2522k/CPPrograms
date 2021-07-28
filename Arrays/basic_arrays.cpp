#include <iostream>

using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << *a << endl;
    cout << *(a + 1) << endl;
    int *p;
    p = a;
    cout << *p << endl;
    char c[] = "Abhishek Chandra";
    char *ch = c;
    cout << c << endl;
    return 0;
}