#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);
    b = b + 1;
    int result[a];
    for (int i = 0; i < a; i++) {
        if (i + b < a) {
            result[i] = arr[i + b];
        } else {
            result[i] = -1;
        }
        printf("%d\n", result[i]);
    }
    return 0;
}
