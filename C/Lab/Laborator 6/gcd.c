#include <stdio.h>

int pmp(int a, int b) {
    // Nqs b = 0 ath pmp eshte a
    if (b == 0) {
        return a;
    }
    return pmp(b, a % b);
}

int main() {
    int num1, num2;
    printf("Vendos 2 numra: ");
    scanf("%d %d", &num1, &num2);
    printf("PMP i %d dhe %d eshte %d.\n", num1, num2, pmp(num1, num2));
}
