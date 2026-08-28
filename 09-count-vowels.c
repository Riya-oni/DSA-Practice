#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
            count++;
        }
    }

    printf("Number of vowels: %d", count);
    return 0;
}