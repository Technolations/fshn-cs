//Funksion rekursiv qe tregon nese nje string
//eshte polindrom ose jo

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char str[], int start, int end) {
    // Base case: NQS ka vetem nje shkronj kthe True
    if (start == end) {
        return true;
    }
    // Base case: NQS ka 2 shkronja kontrolloji dhe kthe True
    if (start + 1 == end) {
        return str[start] == str[end];
    }
    // Kontrollo nese shkronja e par dhe e fundit eshte e njejte
    if (str[start] != str[end]) {
        return false;
    }
    // Kontrollo pa shkronjen e par dhe te fundit
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);

    if (isPalindrome(str, 0, len - 1)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
