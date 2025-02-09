#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1;  // Right shift `n` times, then AND with 1
}

int main() {
    int num, n;
    
    printf("");
    scanf("%d", &num);
    
    printf("");
    scanf("%d", &n);
    
    int bit = getNthBit(num, n);
    
    printf("%d\n", n, num, bit);
    
    return 0;
}
