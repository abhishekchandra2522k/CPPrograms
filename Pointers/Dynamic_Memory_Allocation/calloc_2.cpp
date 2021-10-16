#include <stdio.h>
#include <stdlib.h>

int main()
{
    // dynamically allocated array of size 10 using calloc()
    // array is initialised with 0
    int *arr = (int *)calloc(10, sizeof(int));

    // initializing array with reverse index values
    for (int i = 0; i < 10; i++)
    {
        *(arr + i) = 10 - i;
    }

    // printing array using pointer
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}

// OUTPUT : 10 9 8 7 6 5 4 3 2 1