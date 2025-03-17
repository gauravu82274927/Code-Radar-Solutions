#include<stdio.h>
int prime(int n){
    int count,i;
    for(i=2;i<n;i++){
        if(n%i==0){
            count==1;
        }
        else{
            count==0;
        }
        return count;
            }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",prime(n))
}