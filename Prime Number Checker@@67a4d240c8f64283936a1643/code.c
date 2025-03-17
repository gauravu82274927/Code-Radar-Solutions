#include<stdio.h>
int isPrime(int n){
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
int maiin(){
    int n;
    scanf("%d",&n);
    printf("%d",isPrime(n));
}