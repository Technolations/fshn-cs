//Plotpjestimi me 5

#include <stdio.h>

int main(void){
	int a;
	printf("Vendos numrin: ");
	scanf("%d", &a);
	if (a % 5 == 0){
		printf("Numri plotepjesetohet me 5 pa mbetje");
	}
	else {
		printf("Numri nuk plotepjesetohet me 5");
	}

}