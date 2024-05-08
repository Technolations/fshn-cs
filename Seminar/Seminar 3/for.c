#include <stdio.h>

int main ()
{	
	int i, n, sh;

	sh = 0;

	for (int i = 1; i <= 5; i++)
	{
		printf("Vendos nje numer: ");
		scanf("%d", &n);
		sh = sh + n;
	}
	
	printf("Shuma eshte: %d", sh);
	printf("Mesatarja eshte: %d", sh/5);


	return 0;
}