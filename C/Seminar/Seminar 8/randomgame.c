//Kodi i nje loje qe gjen numrin sekret
//Vendoset ne menyre te rastesishme nga main sa her fillon loja
//Lojtari duhet ta gjej numrin me ane te provave
//Dhe ndihmes qe i jep komjuteri
//Te tilla si: numri sekret eshte me i madh apo me i vogel

//Lojtari ka 5 tentativa per gjetjen e numrit
//Nese ai e gjen numrin shfaqet mesazazhi bravo
//Ne te kundert mesazhi humbet


#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    srand(time(0));
    int x = 1 + rand() % 10;
    int n;
    for (int i = 0; i < 5; i++)
    {
        printf("(Mundesia %d nga 5) Vendos numrin: \n", i+1);
        scanf("%d", &n);
        if (n == x)
        {
            printf("Numri u gjet! Bravo");
            break;
        }
        else if (n < x)
        {
            printf("Numri eshte me i madh, provo Perseri\n");
        }
        else if (n > x)
        {
            printf("Numri eshte me i vogel, Provo perseri\n");
        }
    }
    return 0;
}