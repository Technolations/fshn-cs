void u1 () 
{
	//Afisho numrat nga 50 ne -50 (while loop)
	int x = 50;
	while (x >= -50) 
	{
		printf("%d\n", x);
		x--;
	}
}

void u2 ()
{
	//Merr 5 numra te plote dhe gjej shumen dhe mesataren
	int x;
	int i = 0;
	float s = 0;
	printf("Vendos 5 numra: \n");
	while (i < 5) 
	{
		scanf("%d", &x);
		s = s + x;
		i++;
	}
	printf("Shuma eshte: %f\n", s);
	printf("Mesatarja eshte: %f\n", s/5);
}

void u3 ()
{
	//Merr 10 numra dhe per secilin tregon nese eshte cift apo tek
	int x;
	int i = 0;
	while (i<10)
	{
		printf("Vendos numrin: ");
		scanf("%d", &x);		
		if (x%2==0)
		{
			printf("Numri eshte cift\n");
			printf("\n");
		}
		else 
		{
			printf("Numri eshte tek\n");
			printf("\n");
		}
		printf("\n");
		printf("\n");
		printf("\n");
		i++;
	}
}

void u4 ()
{
	//Merr 10 cifte numrash dhe per secilin gjen se cili eshte me i madh	int x;
	int a, b;
	int i = 0;
	while (i<10)
	{
		printf("Vendos 2 numra: \n");
		scanf("%d %d", &a, &b);		
		if (a>b)
		{
			printf("Numri i pare eshte me i madh\n");
			printf("\n");
		}
		else if (b>a)
		{
			printf("Numri i dyte eshte me i madh\n");
			printf("\n");
		}
		else
		{
			printf("Numrat jan te barabarte\n");
			printf("\n");
		}
		printf("\n");
		printf("\n");
		printf("\n");
		i++;
	}
}
