#include<stdio.h>
 
int main() {
    int i, space, rows=16, star=0;
     
    for (i = 1; i <= rows; i++) {
        for(space = 1; space <= rows-i; space++) {
           printf("  ");
        }
        while (star != (2*i - 1)) {
            printf("\e[0;33m *");
            star++;;
        }
        star=0;
        printf("\n");
    }
    rows--;
    for (i = rows;i >= 1; i--) {
        for (space = 0; space <= rows-i; space++) {
           printf("  ");
        }
        star = 0;
        while (star != (2*i - 1)) {
            printf("\e[0;33m *");
            star++;
        }
        printf("\n");
    }
 
    return 0;
}