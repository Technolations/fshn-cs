#include <stdio.h>

int main() {
    int numer, shifraFundit;

    printf("Vendos nje numer: ");
    scanf("%d", &numer);

    shifraFundit = numer % 10;

    printf("Shifra e fundit eshte : %d\n", shifraFundit);

    return 0;
}
