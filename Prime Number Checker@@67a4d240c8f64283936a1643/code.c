#include<stdio.h>
int prime(int a){
    int i;
    for(i=1;i<a;i++){
        if(a%i==0){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){
    int a;
    scanf("%d",&a);
    if(prime(a)==0){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}