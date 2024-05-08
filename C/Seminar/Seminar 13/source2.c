// Ushtrimi 2 Printo me rekursion vektorin para dhe mbrapsht
#include <stdio.h>

void printForward(int a[], int i, int n) {
    if (i > n) return;
    printf("%d ", a[i]); 
    printForward(a, i + 1, n);
}

void printBackward(int a[], int i, int n) {
    if (n < i) return; 
    printf("%d ", a[n]);
    printBackward(a, i, n - 1);
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int length = sizeof(a) / sizeof(a[0]); 

    printf("Tabela para:\n");
    printForward(a, 0, length - 1);
    printf("\n");

    printf("Tabela mbrapsht:\n");
    printBackward(a, 0, length - 1);
    printf("\n");

    return 0;
}
