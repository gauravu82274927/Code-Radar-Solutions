#include <stdio.h>

int main() {
    int i, j;
    int n ;  // Number of rows
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {  // Loop for rows
        for (j = 1; j <= i; j++) {  // Columns increase as i increases
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
