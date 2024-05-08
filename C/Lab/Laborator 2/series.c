//Gjej shumen e serise: 3 -5 +7 -9

#include <stdio.h>

int main ()
{
	printf("Vendos numrin e kufizave: ");

	int size;
	int num = 1;
	int sum = 0;
	int sh = 1;

	scanf("%d", &size);

	for (int i = 1; i <= size; i++)
	{
		num = num + 2;
		sh = -sh;
		sum = sum + num*sh;
		
		printf("Pozicioni: %d -- Vlera: %d\n", i, num);

	}

	printf("Shuma eshte %d", (-1*sum));

	return 0;
}