#include <stdio.h>

int main() {
    int arr[] = {20, 10, 20, 4, 100};
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Minimum element is: %d", min);
    return 0;
}