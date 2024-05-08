//Ushtrimi 3 
//Printo te gjitha vlerat e matrices me nje cikel
#include <stdio.h>

#include <stdio.h>

int main() 
{
    int A[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int count = 0;
    int m = 0;
    int n = 0;
    for (int i = 0; i < 12; i++)
    {
        printf("%d ", A[n][m]);
        count++;
        if (count == 4){
            printf("\n");
            count = 0;
            m = 0;
            n++;
        }
        else {
            m++;
        }
    }
}
