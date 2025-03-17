#include<stdio.h>
int isPrime(int n){
    int count,i;
    for(i=2;i<n;i++){
        if(n%i==0){
            count++;
        }
        return count;
            }
}
int maiin(){
    int n;
    scanf("%d",&n);
    if(isPrime(n)){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}