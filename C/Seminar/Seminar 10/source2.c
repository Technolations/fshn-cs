// Gjej frekuencen e nje numri te dhene nga perdoruesi
#include <stdio.h>

int main() {
    int n, num, count = 0;

    printf("Vendos madhesine e tabeles: ");
    scanf("%d", &n);

    printf("Vendos numrin qe po kerkojme: ");
    scanf("%d", &num);

    printf("Mbush tabelen\n");
    for(int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        if(temp == num) {
            count++;
        }
    }
    
    printf("Numri %d afishohet %d here.", num, count);
    return 0;
}
