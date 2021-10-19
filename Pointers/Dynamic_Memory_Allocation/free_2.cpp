// C Program to deallocate the memory at runtime
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)calloc(n, sizeof(int));

    if (arr1 == NULL || arr2 == NULL)
    {
        printf("Memory cannot be allocated at this point of time!\n");
    }
    else
    {
        // filling arr1 with index values and arr2 with reverse index values
        for (int i = 0; i < n; i++)
        {
            *(arr1 + i) = i;
            *(arr2 + i) = 10 - i;
        }

        // deallocate memory blocks pointed by
        // arr1 and arr2 from heap
        free(arr1);
        free(arr2);

        printf("Memory freed at runtime!");
    }

    return 0;
}

// INPUT : 10
// OUTPUT : Memory freed at runtime!