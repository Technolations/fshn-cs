// Jepen 2 numra, trego nese a eshte me e vogel
// e barabarte apo me e madhe se b

#include <stdio.h>

int main(void){
	int a,b;
	printf("Vendos numrin e pare: ");
	scanf("%d", &a);
	printf("Vendos numrin e dyte: ");
	scanf("%d", &b);
	if (a>b){
		printf("Numri i pare eshte me i madh se i dyti ");
	}
	else if (a<b){
		printf("Numri i pare eshte me i vogel se i dyti ");
	}
	else {
		printf("Numrat jane te barabarte ");
	}
}