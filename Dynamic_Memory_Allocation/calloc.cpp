#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // dynamically allocated array of size 10 using calloc()
    // array elements are initialized with 0
    // arr stores the base address of the memory block
    char *str = (char *)calloc(n, sizeof(char));

    if (str == NULL)
    {
        printf("Memory Error!\n");
    }
    else
    {
        // initializing array with Scaler Topics string
        for (int i = 0; i < n; i++)
        {
            char ch;
            scanf("%c", &ch);
            *(str + i) = ch;
        }

        // printing array using pointer
        for (int i = 0; i < n; i++)
        {
            printf("%c", *(str + i));
        }
    }

    // deallocating memory pointed by str
    free(str);

    str = NULL;

    // printing array using pointer
    for (int i = 0; i < n; i++)
    {
        printf("%c", *(str + i));
    }

    return 0;
}