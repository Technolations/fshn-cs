void mesatarja(int n)
{
     // Jepet vektori A
     // Populloni vektorin dhe gjej mesataren
     float s = 0;
     int A[n];
     for (int i = 0; i < n; i++)
     {
        printf("Popullo tabelen: ");
        scanf("%d", &A[i]);
        s = s + A[i];
     }
     printf("Mesatarja eshte: %f", s/n);
}

int mainnn() {
    printf("Vendos gjatesine e tabeles: ");
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Gjatesia duhet te jete me e madhe se zero.\n");
        return 1;
    }

    int A[n];
    int max1 = -9999999, max2 = -9999999;
    int max1counter = 0, max2counter = 0;

    for (int i = 0; i < n; i++) {
        printf("Popullo tabelen: ");
        scanf("%d", &A[i]);

        if (A[i] > max1) {
            max2 = max1;
            max1 = A[i];
        } else if (A[i] > max2 && A[i] != max1) {
            max2 = A[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (A[i] == max1) max1counter++;
        else if (A[i] == max2) max2counter++;
    }

    printf("Numri me i madh eshte %d dhe shfaqet %d here\n", max1, max1counter);
    if (max2counter > 0) {
        printf("Numri i dyte me i madh eshte %d dhe shfaqet %d here\n", max2, max2counter);
    } else {
        printf("Nuk ka numer te dyte me te madh.\n");
    }

    return 0;
}

