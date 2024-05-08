//Gjej shumen e serise: 2*3  -5*6  11*30...

#include <stdio.h>

int main ()
{
	printf("Vendos numrin e kufizave: ");

	int size, k1, k2;
	int s = 0;
	int a = 2;
	int b = 3;
	int sh = 1;

	scanf("%d", &size);

	for (int i = 1; i <= size; i++)
	{
		s+=a*b*sh;
		k1 = a + b;
		k2 = a * b;
		a = k1;
		b = k2;
		sh = -sh;

	}

	printf("Shuma eshte %d\n", s);

	return 0;
}