#include <stdio.h>
int main() {
    int a, b;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &b);
    b = (b + 1) % a;
    for (int i = 0; i < a; i++) {
        printf("%d\n", arr[(i + b) % a]);
    }
    return 0;
}
