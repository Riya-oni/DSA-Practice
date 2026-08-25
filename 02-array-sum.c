#include <stdio.h>

int main() {
    int arr[] = {20, 10, 20, 4, 100};
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }

    printf("Largest number is: %d", max);
    return 0;
}