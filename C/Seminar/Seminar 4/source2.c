// Shumen dhe sasine e numrave te pare tek 
// ndermjet 1 dhe nje vlere qe jep perdorusi

#include <stdio.h>

int main() {
    int x, j;
	int s = 0;
	int count = 0;
	printf("Vendos numrin: ");
	scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
		printf("Numrat jane: %d\n", j);
		j = j + 2;

		count = count + 1;
		s = s + j;
	
    }

	printf("Sasia e numrave tek eshte : %d\n", count);
	printf("Shuma e numrave eshte: %d\n", s);

    return 0;
}