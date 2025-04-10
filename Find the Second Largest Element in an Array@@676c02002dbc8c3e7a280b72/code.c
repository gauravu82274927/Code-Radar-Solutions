#include<stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[n-2]);
    return 0;
}