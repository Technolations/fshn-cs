#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tabelat(int n) {
    int tab1[n];
    int tab2[n];
    int gjatesiatab2 = 0;

    // Adresa qe krijon numra te rastesishem
    srand(time(NULL));

    // Mbushja e tabeles me numra nga -100 deri tek 100
    for (int i = 0; i < n; i++) {
        tab1[i] = (rand() % 201) - 100;
        if (tab1[i] > 0) {
            // Numrat pozitive shtohen tek tabela e dyte
            tab2[gjatesiatab2++] = tab1[i];
        }
    }

    // Afisho tabelen e pare
    printf("Tabela e pare: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab1[i]);
    }
    printf("\n");

    // Afisho tabelen e dyte
    printf("Tabela e dyte: ");
    for (int i = 0; i < gjatesiatab2; i++) {
        printf("%d ", tab2[i]);
    }
    printf("\n");
}

int main() {
    tabelat(10);
    return 0;
}

//Jepen tabelat A[n] dhe B[m] krijo tabelen C me elem e perbashket te ktyre dy elem