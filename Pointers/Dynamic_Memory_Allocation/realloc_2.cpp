// C Program to dynamically reallocate an array ptr
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    // dynamically allocated array of size n using calloc()
    // array is initialised with 0
    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory cannot be allocated at this point of time!\n");
    }
    else
    {
        // initializing array with reverse index values
        for (int i = 0; i < n; i++)
        {
            *(arr + i) = n - i;
        }

        // reallocating arr pointer dynamic memory to increase by double,
        // increased double half will now contain garbage values
        int *arr2 = (int *)realloc(arr, (2 * n) * sizeof(int));

        if (arr2 == NULL)
        {
            printf("Reallocation failed!\n");
        }
        else
        {
            // printing array using pointer
            for (int i = 0; i < 2 * n; i++)
            {
                printf("%d ", *(arr + i));
            }
        }
    }

    return 0;
}

// INPUT : 5, arr_size = 2*5 = 10 after reallocation
// OUTPUT : 5 4 3 2 1 754319 989855803 31921 7417192 7405760