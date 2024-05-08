// Nje program qe shfaq alfabetin nga a te z

#include <stdio.h>

int main() {
    char start = 'A';
    char end = 'Z';

    for (char ch = start; ch <= end; ++ch) {
        printf("%c ", ch);
    }

    return 0;
}