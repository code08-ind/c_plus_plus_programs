#include <math.h>
#include <stdio.h>
long long convertion(int m);

int main() {
    int m;
    printf("Enter a decimal number: ");
    scanf("%d", &m);
    printf("%d in decimal = %lld in binary", m, convertion(m));
    return 0;
}

long long convertion(int m) {
    long long bina = 0;
    int rem, i = 1;
    while (m != 0) {
        rem = m % 2;
        m /= 2;
        bina += rem * i;
        i *= 10;
    }
    return bina;
}
