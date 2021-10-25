#include <stdio.h>

// definition of notADanglingPointer() function
int *notADanglingPointer()
{
    // temp variable has a global scope
    static int temp = 10;

    // returning address of temp variable
    return &temp;
}

int main()
{
    // ptr will point to temp variable
    // as temp variable has a global scope now, it will not be destroyed after the execution of below line
    int *ptr = notADanglingPointer();

    // ptr is not a Dangling Pointer anymore
    // ptr contains address of static variable temp
    // and is pointing to temp with value 10
    printf("%d", *ptr);

    return 0;
}

// OUTPUT : 10