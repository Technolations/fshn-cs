#include <stdio.h>

int main (void){

	int x = 0;
	int s = 0;
	int k = 0;
	
	printf("Vendos vleren e x: ");
	scanf("%d", &x);

	for (int i = 0; i<=x; i++){
		k = 2*i+1;
		printf("%d ", k);
		printf("\n");
		s = s + k;
	}
	printf("Vlera e shumes eshte: %d", s);
	
}