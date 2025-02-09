#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("Not Set");
        return 0;
    }

    int msb = 1 << (31 - __builtin_clz(n));  // Find the actual MSB value

    if (msb) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
