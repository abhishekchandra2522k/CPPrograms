#include <stdio.h>

// definition of danglingPointer() function
int *danglingPointer()
{
    // temp variable has local scope
    int temp = 10;

    // returning address of temp variable
    return &temp;
}

int main()
{
    // ptr will point to some garbage value
    // as temp variable will be destroyed
    // after the execution of below line
    int *ptr = danglingPointer();

    // ptr is a Dangling Pointer now
    // ptr contains some random address and
    // is pointing to some garbage value
    printf("%d", *ptr);

    return 0;
}