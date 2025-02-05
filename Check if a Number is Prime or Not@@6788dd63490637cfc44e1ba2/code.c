#include<stdio.h>
int main(){
    int a, count=0, i;
    scanf("%d",&a);
    if (a<0){
        printf("INVALID INPUT !");
    }
    else{
        for(i=2;i<a;i++){
            if(a%i==0){
                count+=1;
                break;
            }
        } 
        if(count==0){
            printf("The number is a prime number !");
        }
        else{
            printf("The number is not a prime number !");
            
        }
    }
    return 0;
}