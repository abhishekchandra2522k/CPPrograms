#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    ptr = (int *)realloc(ptr, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory Error!\n");
    }
    else
    {
        *ptr = 7;

        printf("%d\n", *ptr);

        // deallocating memory blocks pointed by
        // ptr using realloc()
        realloc(ptr, 0);

        printf("%d\n", *ptr);

        ptr = NULL;

        printf("Memory freed using realloc()!");
    }

    return 0;
}