#include <stdio.h>

int main()
{
    int i = 1, N;

    printf("Enter a value : ");
    scanf("%d", &N);

    printf("Multiplication Table of %d : \n", N);
    do
    {
        // loop body
        printf("%d * %d = %d\n", N, i, N * i);

        // update expression
        i++;
    }
    // condition
    while (i <= 10);

    return 0;
}