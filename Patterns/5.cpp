#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= (6 - i) && j <= (4 + i))
            {
                cout << "*\t";
            }
            else
            {
                cout << "\t";
            }
        }
        cout << endl;
    }
    return 0;
}

/*

OUTPUT:

                                *
                        *       *       *
                *       *       *       *       *
        *       *       *       *       *       *       *
*       *       *       *       *       *       *       *       *

*/