#include<stdio.h>
int main(){
    int a,b,c,temp;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    b=b+1;
    for(int i=0;i<a;i++){
        arr[i]=temp;
        arr[i+b]=arr[i];
        temp=arr[i+b];
        printf("%d\n",arr[i]);
    }
    return 0;
}
