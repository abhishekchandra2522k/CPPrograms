#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // dynamically allocated array of size n using malloc() and calloc()(during run time)
    // array is initialized with garbage values
    int *arr1 = (int *)malloc(n * sizeof(int));
    // array is initialized with 0
    int *arr2 = (int *)calloc(n, sizeof(int));

    if (arr1 == NULL || arr2 == NULL)
    {
        printf("Memory Error!\n");
    }
    else
    {
        // filling the array arr1 with index values
        for (int i = 0; i < n; i++)
        {
            *(arr1 + i) = i;
        }
        // initializing array arr2 with reverse index values
        for (int i = 0; i < n; i++)
        {
            *(arr2 + i) = n - i;
        }

        // reallocating arr1 pointer dynamic memory to reduce to half,
        // other half deallocted will now contain garbage values
        int *arr3 = (int *)realloc(arr1, (n / 2) * sizeof(int));

        // reallocating arr2 pointer dynamic memory to increase by double,
        // increased double half will now contain garbage values
        int *arr4 = (int *)realloc(arr2, (2 * n) * sizeof(int));

        if (arr3 == NULL || arr4 == NULL)
        {
            printf("Reallocation failed!\n");
        }
        else
        {
            // printing array arr1 using pointer
            for (int i = 0; i < n; i++)
            {
                printf("%d ", *(arr3 + i));
            }

            printf("\n");

            // printing array arr2 using pointer
            for (int i = 0; i < 2 * n; i++)
            {
                printf("%d ", *(arr4 + i));
            }
        }
    }
    return 0;
}