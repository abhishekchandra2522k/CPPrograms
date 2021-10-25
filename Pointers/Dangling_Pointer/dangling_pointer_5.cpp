// Dangling Pointers using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{

    // 4 bytes of int memory block (64bit compiler) allocated using malloc() during runtime
    int *ptr = (int *)malloc(sizeof(int)); // normal pointer

    *ptr = 10;

    // memory block deallocated using free() function
    free(ptr);

    // this line added will help us to determine that ptr is currently not pointing to any location
    // this pointer is known as NULL Pointer
    ptr = NULL;

    return 0;
}