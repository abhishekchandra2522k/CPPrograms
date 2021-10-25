// Variable goes out of scope
#include <stdio.h>

int main()
{
    // A pointer that has not been initialized is
    // known as a Wild Pointer.
    int *ptr; // currently acting a wild pointer

    // a block of code
    // static variables have a global scope
    {
        static int temp = 10;
        ptr = &temp; // acting as normal pointer
    }

    // temp is not removed from the memory (global scope)
    printf("%d", *ptr);

    return 0;
}

// OUTPUT : 10