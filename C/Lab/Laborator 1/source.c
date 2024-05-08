#include <stdio.h>

int main() {
    int n, m;
    printf("Vendos gjatesine e tabeles T: ");
    scanf("%d", &n);
    printf("\n");
    printf("Vendos gjatesine e tabeles A: ");
    scanf("%d", &m);

    int T[n], A[m], B[n];
    int T_count[n], A_count[n];

    for (int i = 0; i < n; i++) {
        T_count[i] = 0;
        A_count[i] = 0;
        B[i] = 0;
    }

    printf("Mbush tabelen T:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    printf("Mbush tabelen A:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &A[i]);
    }

    // Numro perseritjen ne T
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (T[i] == T[j]) {
                T_count[i]++;
            }
        }
    }

    // Numro perseritjen ne A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (T[i] == A[j]) {
                A_count[i]++;
            }
        }
    }

    // Gjej elementet e perbashket
    int B_index = 0;
    for (int i = 0; i < n; i++) {
        if (T_count[i] == A_count[i]) {
            B[B_index++] = T[i];
        }
    }

    printf("Tabela B:\n");
    for (int i = 0; i < B_index; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
