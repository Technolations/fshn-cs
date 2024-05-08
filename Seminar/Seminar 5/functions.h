//Afisho figuren
int katrori (void)
{
	int count;
	printf("Vendos madhesine e katrorit: ");
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

//Afisho tabelen e shumezimit nga 1-10
int tabela_shumezimit (void)
{
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			printf("%d\t", j*i);
		}
		printf("\n");
		printf("\n");	
	}
}

//Afisho pershendetje 100 her
int while_loop (void)
{	
	int i = 0;
	while (i <= 100) {
		printf("%d Pershendetje!\n", i);
		i++;
	}
	printf("\n");
}