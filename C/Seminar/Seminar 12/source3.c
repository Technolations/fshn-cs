#include <stdio.h>

int sum(int T[], int n);

int main() {
    int T[] = {1, 2, 3, 4, 5};
    int n = sizeof(T) / sizeof(T[0]);

    printf("Sum of array: %d\n", sum(T, n));
    return 0;
}


int sum(int T[], int n) {
    if (n <= 0) {
        return 0;
    }
    else {
        return T[n - 1] + sum(T, n - 1);
    }
}
