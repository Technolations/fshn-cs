void get_int(const char *output) 
{
    int n;
    // Afisho mesazhin output
    printf("%s", output);
    // Vazhdo kerko variabel te tipit int
    while (scanf("%d", &n) != 1) 
    {
        printf("Vlera qe vendoset nuk ishte e tipit int\n");
        while (getchar() != '\n');
        printf("%s", output); // Afisho perseri mesazhin
    }
    // Afisho numrin e vendosur
    printf("%d", n);
	printf("\n");
}

void shuma()
{
    int a, b;
    printf("Vendos vleren e pare: ");
    scanf("%d", &a);
    printf("Vendos vleren e dyte: ");
    scanf("%d", &b);    
    printf("Shuma e dy numrave eshte: %d", a + b);
    printf("\n");
}