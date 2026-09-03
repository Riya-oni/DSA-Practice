#include <stdio.h>

int main() {
    int arr[] = {20, 10, 20, 4, 100};
    int n = 5;
    int target = 4;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            printf("Element found at index: %d", i);
            break;
        }
    }

    if (found == 0) {
        printf("Element not found");
    }

    return 0;
}