#include <stdio.h>

void main()
{
    int  n, bval, dval = 0, base = 1, rem;

    printf("Enter a binary number(1s and 0s) \n");
    scanf("%d", &n); /* maximum five digits */
    bval = n;
    while (n > 0)
    {
        rem = n % 10;
        dval = dval + rem * base;
        n = n / 10 ;
        base = base * 2;
    }
    printf("The Binary number is = %d \n", bval);
    printf("Its decimal equivalent is = %d \n", dval);
}
