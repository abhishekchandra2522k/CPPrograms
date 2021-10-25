// Variable goes out of scope
#include <stdio.h>

int main()
{
    // A pointer that has not been initialized is
    // known as a Wild Pointer.
    int *ptr; // currently acting a wild pointer

    // a block of code
    // variables declared inside will get destroyed
    // at the end of execution of this block
    {
        int temp = 10;
        ptr = &temp; // acting as normal pointer
    }

    // temp is now removed from the memory (out of scope)
    // now ptr is a dangling pointer

    return 0;
}