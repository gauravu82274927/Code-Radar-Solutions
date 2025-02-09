#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);  // Left shift 1 by `n`, then negate and AND with num
}

int main() {
    int num, n;
    
    printf("");
    scanf("%d", &num);
    
    printf("");
    scanf("%d", &n);
    
    int result = clearNthBit(num, n);
    
    printf("%d\n",result);
    
    return 0;
}
