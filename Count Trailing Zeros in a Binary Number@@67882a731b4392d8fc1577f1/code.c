#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    // If number is 0, all bits are 0, so return 32
    if (num == 0) {
        printf("32\n");
        return 0;
    }

    // Count trailing zeros
    while ((num & 1) == 0) {
        count++;
        num >>= 1;  // Right shift to remove the checked bit
    }

    printf("%d\n", count);
    return 0;
}
