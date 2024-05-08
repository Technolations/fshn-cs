#include <stdio.h>

int main() {
    int n;

    printf("Vendos madhesine: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vendos nje madhesi pozitive.\n");
        return 1; 
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) {
                printf("*   ");
            } else {
                printf("#   ");
            }
        }
        printf("\n");
		printf("\n");
    }

    return 0;
}
