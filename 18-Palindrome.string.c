#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "madam";
    char reversed[20];
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';

    if (strcmp(str, reversed) == 0) {
        printf("Palindrome string");
    } else {
        printf("Not a palindrome");
    }

    return 0;
}