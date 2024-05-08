#include <stdio.h>
//Ushtrimi 1 Nderto nje funks qe merr nje vektor dhe nje vlere
//kthen pos ne te cilen ndodhet kjo vlere

int pos(int T[], int n, int x)
    {
        for (int i = 0; i < n; i++)
        {
            if (T[i] == x)
            {
                return i;
            }
        }
        return -1;
    }

int main()
{
    
    int A[] = {3, 4, 2, 5, 7, 1, 8};
    int n = 7;

    printf("Pozicioni i numrit eshte %d", pos(A, n, 2));
    
    return 0;
}