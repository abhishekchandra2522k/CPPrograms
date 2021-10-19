// C Program to dynamically allocate an array ptr
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // dynamically allocated array of size n using malloc() (during run time)
    // array is initialized with garbage values
    // arr stores the base address of the memory block
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory cannot be allocated at this point of time!");
    }
    else
    {
        // filling the array with index values
        for (int i = 0; i < n; i++)
        {
            *(arr + i) = i;
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
// OUTPUT : 0 1 2 3 4 5 6 7 8 9