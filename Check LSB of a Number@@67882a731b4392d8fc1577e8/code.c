#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=a&1;
    if(b==1){
        printf("Set");
    }
    if(b==0){
        printf("Not Set");
    }
    return 0;
}