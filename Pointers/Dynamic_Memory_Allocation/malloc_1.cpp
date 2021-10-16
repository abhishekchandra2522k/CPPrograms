#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *t = (int *)malloc(sizeof(int)); // dynamically allocated variable
    *t = 2;
    printf("%d", *t);
    return 0;
}