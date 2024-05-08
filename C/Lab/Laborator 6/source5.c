#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Shkruani nje tekst: ");
    scanf("%s", str);

    getchar();

    char x;
    printf("Shkruani karakterin qe deshironi te fshini: ");
    scanf("%c", &x);

    int len = strlen(str);
    int count = 0;

    // Fshij karakterin x nga teksti
    for (int i = 0; i < len; i++) {
        if (str[i] == x) {
            str[i] = '\0'; // Fshij karakterin
            count++;
        }
    }
    
    // Printo tekstin pa karakterin x
    printf("Teksti pasi eshte fshire karakteri '%c':\n", x);
    for (int i = 0; i < len - count; i++) {
        if (str[i] != '\0') { // Printo vetem karakterat qe nuk jane '\0'
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}
