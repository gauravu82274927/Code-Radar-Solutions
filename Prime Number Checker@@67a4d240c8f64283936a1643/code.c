#include<stdio.h>
int prime(int n){
    int count,i;
    for(i=2;i<n;i++){
        if(n%i==0){
            count==1;
        }
        return count;
            }
}
int main(){
    scanf("%d",&n);
    if(prime(n)==1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}