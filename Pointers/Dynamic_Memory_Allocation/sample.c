#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    // we can't use this in C Language,
    // it will throw an error.

    // dynamically allocated array of size 10 using malloc()
    // array is initialized with garbage values
    // int *arr = (int *)malloc(n * sizeof(int));

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
    return 0;
}