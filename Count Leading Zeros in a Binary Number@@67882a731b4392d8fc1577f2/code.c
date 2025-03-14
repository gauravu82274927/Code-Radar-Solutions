#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    // If number is 0, all 32 bits are zero
    if (num == 0) {
        printf("32\n");
        return 0;
    }

    // Check leading zeros
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) // If a 1 is found, break
            break;
        count++;
    }

    printf("%d\n", count);
    return 0;
}
