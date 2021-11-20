#include <stdio.h>
#include <stdlib.h>

int main()
{
    // dynamically allocated variable, sizeof(char) = 1 byte
    char *ptr = (char *)malloc(sizeof(char));

    if (ptr == NULL)
    {
        printf("Memory Error!\n");
    }
    else
    {
        *ptr = 'S';
        printf("%c", *ptr);
    }

    // deallocating memory pointed by ptr
    free(ptr);

    ptr = NULL;

    printf("\n%c ", *ptr);

    return 0;
}