// Variable goes out of scope
#include <stdio.h>

int main()
{
    // a pointer to pointer, contains address of a pointer
    char **str;

    // a block of code
    // variables declared inside will get destroyed
    // at the end of execution of this block
    {
        char *temp = "temporary_string";
        str = &temp; // acting as normal pointer for now
    }

    // temp pointer is now removed from the memory (out of scope)
    // now str is a dangling pointer

    return 0;
}