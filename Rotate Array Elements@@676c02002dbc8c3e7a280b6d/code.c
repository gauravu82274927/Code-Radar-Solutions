#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);

    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &b);
    b = (b + 1) % a; // number of positions to rotate right

    for (int i = 0; i < a; i++) {
        // Right rotation logic
        printf("%d\n", arr[(i - b + a) % a]);
    }

    return 0;
}
