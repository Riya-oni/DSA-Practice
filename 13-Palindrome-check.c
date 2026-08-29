#include <stdio.h>

int main() {
    int n = 121;
    int original = n;
    int reversed = 0;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (original == reversed) {
        printf("Palindrome number");
    } else {
        printf("Not a palindrome");
    }

    return 0;
}