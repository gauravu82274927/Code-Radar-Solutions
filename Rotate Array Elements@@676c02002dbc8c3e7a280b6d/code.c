#include<stdio.h>
int main(){
    int a,b,c,temp;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    for(int i=0;i<a;i++){
        arr[i]=arr[i+b];
        printf("%d",arr[i]);
    }
    return 0;
}