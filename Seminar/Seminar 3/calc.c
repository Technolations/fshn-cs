#include <stdio.h>

int main ()
{
	int x, y;
	char op;

	printf("Jep 2 numra dhe operatorin: ");
	scanf("%d %d %c", &x, &y, &op);

	switch (op)
	{
	case '+':
		printf("Shuma = %d", x+y);
		break;

	case '-':
		printf("Shuma = %d", x-y);
		break;

	case '*':
		printf("Shuma = %d", x*y);
		break;

	case '/':
	
		printf("Shuma = %d", 1.0(x/y));
		break;
	
	default:
		
		break;
	}

	return 0;

}