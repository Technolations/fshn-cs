//Lexo nje numer nga tastiera dhe trego
// Nese numri eshte pozitiv, negativ, apo 0
#include <stdio.h>

int main(void){
	int a;
	printf("Vendos numrin: ");
	scanf("%d", &a);
	if (a>0){
		printf("\n Numri eshte pozitiv!");
	}
	else if (a<0){
		printf("\n Numri eshte negativ!");
	}
	else{
		printf("\n Numri eshte 0!");
	}

}