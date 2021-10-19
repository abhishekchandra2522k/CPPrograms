// C Program to dynamically allocate an int ptr
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // dynamically allocated variable
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory cannot be allocated at this point of time!");
    }
    else
    {
        *ptr = 2;
        printf("%d", *ptr);
    }
    return 0;
}

// OUTPUT : 2