#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int n[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &n[i]);
    }
    int max = n[0];
    for (int i = 1; i < N; i++) {
        if (n[i] > max) {
            max = n[i];
        }
    }
    int secondMax = -1;
    for (int i = 0; i < N; i++) {
        if (n[i] != max) {
            if (secondMax == -1 || n[i] > secondMax) {
                secondMax = n[i];
            }
        }
    }
    printf("%d", secondMax);
    return 0;
}
