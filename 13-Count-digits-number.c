#include <stdio.h>

int main() {
    int n = 12345;
    int count = 0;

    while (n != 0) {
        count++;
        n = n / 10;
    }

    printf("Number of digits: %d", count);
    return 0;
}