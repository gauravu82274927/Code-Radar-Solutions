#include <stdio.h>

int toggleNthBit(int num, int n) {
    return num ^ (1 << n);  // XOR with 1 at position `n` to toggle the bit
}

int main() {
    int num, n;
    
    printf("");
    scanf("%d", &num);
    
    printf("");
    scanf("%d", &n);
    
    int result = toggleNthBit(num, n);
    
    printf("%d\n",result);
    
    return 0;
}
