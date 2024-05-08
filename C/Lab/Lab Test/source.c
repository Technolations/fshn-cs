#include <stdio.h>

int main () 
{
    // Jepen vektoret T[n] dhe A[m] me nr te plote te perseritur
    // Krijo tabelen B[] me elem e T qe gjenden te T aq here sac jan dhe tek A


    int n, m, o;
    printf("Vendos gjatesine e tabeles T: ");
    scanf("%d", &n);
    int T[n], A[m];
    for (int i = 0; i < n; i++)
    {
        printf("Mbush tabelen T: ");
        scanf("%d", &T[i]);
    }
    printf("Vendos gjatesine e tabeles A: ");
    scanf("%d", &m);
    for (int i = 0; i < n; i++)
    {
        printf("Mbush tabelen A: ");
        scanf("%d", &A[i]);
    }

    return 0;
}