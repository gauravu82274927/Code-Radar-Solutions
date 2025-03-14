#include <stdio.h>

int main() {
    int num, pos = 0;
    scanf("%d", &num);

    // If num is 0, there's no set bit
    if (num == 0) {
        printf("-1\n");  // Assuming -1 for no set bit (can be modified)
        return 0;
    }

    // Find the position of the lowest set bit
    while ((num & 1) == 0) {
        num >>= 1;
        pos++;
    }

    printf("%d\n", pos);
    return 0;
}
