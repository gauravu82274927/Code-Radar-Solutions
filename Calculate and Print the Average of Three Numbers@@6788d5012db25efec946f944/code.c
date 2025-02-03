#include <stdio.h>
int main(){
    int a,b,c,d;
    float e;
    printf("");
    scanf("%d %d %d",&a, &b, &c);
    d=(a+b+c);
    e=(d/3.0);
    printf("Average: %.2f",e);
    return 0;
}