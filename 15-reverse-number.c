#include <stdio.h>

int main() {
    int n = 12345;
    int reversed = 0;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    printf("Reversed number: %d", reversed);
    return 0;
}