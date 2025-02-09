#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int msb = 0;
    
    while (n > 1) {
        n = n >> 1;  // Right shift until only MSB remains
        msb = 1;
    }
    if(msb==1){
        printf("Set");
    }
    if(msb==0){
        printf("Not Set");
        
    }
    
    return 0;
}
