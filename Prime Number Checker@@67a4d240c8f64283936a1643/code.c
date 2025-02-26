#include <stdio.h>

int prime(int a) {
    if (a < 2) return 0; // 0 and 1 are not prime numbers
    int i;
    for (i = 2; i * i <= a; i++) { // Loop till sqrt(a) for optimization
        if (a % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int a;
    scanf("%d", &a);
    if (prime(a)) {
        printf("1"); // Prime
    } else {
        printf("0"); // Not prime
    }
    return 0;
}
