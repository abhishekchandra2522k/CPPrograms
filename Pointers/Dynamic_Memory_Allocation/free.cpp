#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // dynamically allocated array of size n using malloc() (during run time)
    // array is initialized with garbage values
    int *arr = (int *)malloc(n * sizeof(int));

    // filling the array with index values
    for (int i = 0; i < n; i++)
    {
        arr[i] = 45;
    }

    free(arr);

    // printing array using pointer
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    return 0;
}

// INPUT : 10
// OUTPUT :