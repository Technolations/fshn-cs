#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h> 

int main() {
    int rreshtat, kolonat;

    printf("Vendos gjatesine e kolonave: ");
    scanf("%d", &kolonat);

    printf("Vendos gjatesine e rreshtave: ");
    scanf("%d", &rreshtat);

    int matrica[rreshtat][kolonat];

    printf("Mbush tabelen (vlerat ndahen me hapesire, deri ne %d vlera per rresht):\n", kolonat);

    // Pastro buferin e hyrjes për të lexuar me siguri rreshtat e tekstit.
    while (getchar() != '\n');

    for (int i = 0; i < rreshtat; i++) {
        printf("Rreshti %d: ", i + 1);
        char rreshti[1024];
        fgets(rreshti, sizeof(rreshti), stdin);

        char* tokeni = strtok(rreshti, " ");
        int j;
        for (j = 0; tokeni != NULL && j < kolonat; j++) {
            matrica[i][j] = atoi(tokeni);
            tokeni = strtok(NULL, " ");
        }

        // Nëse përdoruesi nuk ka vendosur mjaftueshëm numra, mbush pjesët e mbetura me 0.
        while (j < kolonat) {
            matrica[i][j++] = 0;
        }
    }

    printf("\nMatrica e plote me mesataren per cdo rresht:\n");
    for (int i = 0; i < rreshtat; i++) {
        double shuma = 0;
        int numrimi = 0;
        for (int j = 0; j < kolonat; j++) {
            printf("%4d", matrica[i][j]);
            shuma += matrica[i][j];
            if (matrica[i][j] != 0) numrimi++;
        }

        double mesatarja = numrimi > 0 ? shuma / numrimi : 0;

        // Kontrollo nëse mesatarja është numër i plotë.
        if (floor(mesatarja) == mesatarja) {
            // Nëse po, shtype si numër i plotë.
            printf(" | Mesatarja: %.0f\n", mesatarja);
        } else {
            // Përndryshe, shtype me tre shifra pas pikës.
            printf(" | Mesatarja: %.3f\n", mesatarja);
        }
    }

    return 0;
}
