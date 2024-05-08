#include <stdio.h>
//Gjej vleren me te madhe ne nje array
int main() 
{
    printf("Vendos gjatesine e tabeles: ");
    int n;
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Gjatesia duhet te jete me e madhe se zero.\n");
        return 1;
    }

    int A[n];
    int max = -9999999;
    for (int i = 0; i < n; i++) 
    {
        printf("Popullo tabelen: ");
        scanf("%d", &A[i]);
        if (A[i] > max) {
            max = A[i];
    }
    }
    printf("Numri me i madh eshte %d \n", max);
    return 0;
}