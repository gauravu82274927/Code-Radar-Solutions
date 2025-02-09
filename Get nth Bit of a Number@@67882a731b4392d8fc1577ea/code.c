#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1;  // Right shift `n` times, then AND with 1
}

int main() {
    int num, n;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter bit position (0-based index): ");
    scanf("%d", &n);
    
    int bit = getNthBit(num, n);
    
    printf("The %d-th bit of %d is: %d\n", n, num, bit);
    
    return 0;
}
