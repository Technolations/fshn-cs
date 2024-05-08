//Nderto nje program ne gjuhen C qe gjen perimetrin 
//dhe syprinen e drejtkendeshit me brinje a dhe b

#include <stdio.h>

int main(void){
	int a, b;
	printf("Vendos gjeresine: ");
	scanf("%d", &a);
	printf("Vendos gjatesine: ");
	scanf("%d", &b);
	int p, s;
	p = 2 * a + 2 * b;
	s = a * b;
	printf("Perimetri eshte: %d\n", p);
	printf("Syprina eshte: %d\n", s);
}