#include <stdio.h>

int sumOfDigits(int x) {
    if (x < 10) {
        return x;
    }
    return x % 10 + sumOfDigits(x / 10);
}

int main ()
{
    //Te mblidhet shuma e shifrave te numrave
    printf("%d", sumOfDigits(12345));
}