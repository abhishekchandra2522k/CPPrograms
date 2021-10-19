// C Program to dynamically reallocate an array ptr
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // dynamically allocated array of size n using malloc() (during run time)
    // array is initialized with garbage values
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory cannot be allocated at this point of time!\n");
    }
    else
    {
        // filling the array with index values
        for (int i = 0; i < n; i++)
        {
            *(arr + i) = i;
        }

        // reallocating arr pointer dynamic memory to reduce to half,
        // other half will now contain garbage values
        int *arr2 = (int *)realloc(arr, (n / 2) * sizeof(int));

        if (arr2 == NULL)
        {
            printf("Reallocation failed!\n");
        }
        else
        {
            // printing array using pointer
            for (int i = 0; i < n; i++)
            {
                printf("%d ", *(arr2 + i));
            }
        }
    }
    return 0;
}

// INPUT : 10
// OUTPUT : 0 1 2 3 4 315956 315956826 51768 13050808 13041856