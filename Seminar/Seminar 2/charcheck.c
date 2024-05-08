// Merr nje karakter dhe gjen nese eshte numer shkronje apo karakter
#include <stdio.h>

int main (void){
	//Gjej nese nje nr eshte + apo -
	char a;
	printf("Vendos vleren: ");
	scanf("%c", &a);
	if (a>='0' && a<='9'){
		printf("Vlera eshte numer");
	}
		else if (a>='a' && a<='z' || a>='A' && a<='Z'){
		printf("Vlera eshte karakter");
	}
		else {
		printf("Vlera eshte simbol");
	}
}