#include <stdio.h>
#include "/Users/dev/C/Lib/fancy.h"

int main() {

    //Printo nje matric me x rreshta dhe y kolona
    //Useri mbush tabelen
    //Gjej max e tabeles

    int x = 0;
    int y = 0;

    printf("Vendos gjatesine: ");
    scanf("%d", &x);

    printf("\n");

    printf("Vendos gjeresine: ");
    scanf("%d", &y);

    int T[x][y];

    printf("\n");

    printf("Mbush tabelen: \n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &T[i][j]);
        } 
    }

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d  ", T[i][j]);
        } 
        printf("\n");
        printf("\n");

    }

    int max = -99999999;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (T[i][j] >= max)
            {
                max = T[i][j];
            }
        } 
    }

    //printf("Vlera me e madhe e tabeles eshte: %d \n", max);
    
    printf("Rreshti i pare i tabeles eshte: \n");

    for (int i = 0; i < y; i++)
    {
        printf("%d ", T[0][i]);
    }
    
    printf("\n");
    
    return 0;
}