int seria3 ()
{
	printf("Vendos numrin e kufizave: ");

	int size;
	int num = 3;
	int sum = 0;
	int sh = -1;
	int add = 1;

	scanf("%d", &size);

	for (int i = 1; i <= size; i++)
	{

		num = num + add;
		add = add + 1;
		sh = -sh;
		sum = sum + num * sh;
		printf("Pozicioni: %d -- Vlera: %d\n", i, num);

	}

	printf("Shuma eshte %d\n", (sum));

	return 0;
}

int seria2 ()
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

int seria1 ()
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