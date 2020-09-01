#include <stdio.h>

int main()
{
    int  n, bval, dval = 0, base = 1, rem;

    printf("Enter a binary number \n");
    scanf("%d", &n);
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
    return 0;
}
