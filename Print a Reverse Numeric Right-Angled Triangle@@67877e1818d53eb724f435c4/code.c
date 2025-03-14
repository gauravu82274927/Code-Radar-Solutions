#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {  // Change the loop to print in ascending order
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
