#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("Loss");
    }
    else if(a<b){
        printf("Profit");
    }
    return 0;
}