#include <stdio.h>

void fig1(int n) {
	int i;
	int j;
    for (int i = n; i >= 1; --i) {
        for (int j = n - i; j > 0; --j) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            if (k == 1 || k == 2 * i - 1 || i == n) {
                printf("@");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void fig2(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = n - i; j > 0; --j) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            if (k == 1 || k == 2 * i - 1 || i == n) {
                printf("@");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    fig1(6);
    fig2(6);

    return 0;
}
