#include<stdio.h>
int prime(int a){
    int count=0;
    for(int n=2;n<a;n++){
        if(n%a==0){
            count+=1;
        }
        return count;
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
