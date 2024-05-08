#include <stdio.h>
#include "serite.h"

int main (){
	printf("Cilen seri deshiron te ekzekutosh? (1, 2 ose 3)  ");
	int x;
	scanf("%d", &x);
	switch (x)
	{
	case 3:
		seria3();
		break;
	
	case 2:
		seria2();
		break;
	
	case 1:
		seria1();
		break;

	default:
		break;
	}
	return 0;
}