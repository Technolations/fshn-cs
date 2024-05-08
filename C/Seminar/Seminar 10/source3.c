// Merr elem dhe madhesine e vektorit nga perdorusi dhe kopjon kte vektor ne vektor te dyte
// Elem e vektoret e kti vektori i kopjon anasjelltas

#include <stdio.h>

int main () 
{   
    int n;
    printf("Vendos gjatesine e tabeles: ");
    scanf("%d", &n);
    int A[n], B[n], C[n];
    for (int i = 0; i < n; i++)
    {
        printf("Mbush tabelen: ");

        scanf("%d", &A[i]);
        B[i] = A[i];
        C[(n-1)-i] = A[i];
    }
    printf("Tabela A: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\nTabela B: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\nTabela C: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", C[i]);
    }
}