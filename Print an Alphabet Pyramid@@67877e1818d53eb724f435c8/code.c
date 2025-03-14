#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print alphabets
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}
