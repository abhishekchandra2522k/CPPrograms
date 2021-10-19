// C Program to dynamically allocate an array ptr using calloc()
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // dynamically allocated array of size 10 using calloc()
    // array is initialised with 0
    // arr stores the base address of the memory block
    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory cannot be allocated at this point of time!");
    }
    else
    {
        // initializing array with reverse index values
        for (int i = 0; i < n; i++)
        {
            *(arr + i) = 10 - i;
        }

        // printing array using pointer
        for (int i = 0; i < n; i++)
        {
            printf("%d ", *(arr + i));
        }
    }

    return 0;
}
// INPUT : 10
// OUTPUT : 10 9 8 7 6 5 4 3 2 1