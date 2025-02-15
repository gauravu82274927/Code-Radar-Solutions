#include<stdio.h>
int main(){
    int a,rem,bin=0,place=1;
    scanf("%d",&a);
    while(a){
        rem = a % 2;         
        bin += rem * place;   
        place *= 10;          
        a /= 2;
    }
    printf("%d",bin);
    return 0;
}