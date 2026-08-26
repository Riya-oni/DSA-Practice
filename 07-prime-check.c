int main() {
    int n = 7;
    int isPrime = 1;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;              
        }
    }
    

    if (isPrime == 1) {
        printf("Prime number");
    } else {
        printf("Not a prime number");
    }

    return 0;
}
