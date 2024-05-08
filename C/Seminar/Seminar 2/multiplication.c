//Shenjen e prodhimit te dy numrave pa perdorur shumzimin
#include <stdio.h>

int main (void){
	int a;
	printf("Vendos numrin e pare: ");
	scanf("%d", &a);
	int b;
	printf("Vendos numrin e dyte: ");
	scanf("%d", &b);
	if (a>0 && b>0){
		printf("Prodhimi eshte pozitiv");
		}
		else if (a == 0 || b == 0){
		printf("Prodhimi eshte 0");
		}
		else {
		printf("Prodhimi eshte negativ");
		}

}