#include <stdio.h>

int main() {
    int n = 10;
    int first = 0, second = 1;

    printf("%d %d ", first, second);

    for (int i = 3; i <= n; i++) {
        int next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    return 0;
}