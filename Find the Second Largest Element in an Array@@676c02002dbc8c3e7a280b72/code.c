#include<stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d",&n);
    int arr[n];
    int sort[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort[0]=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i+1]==arr[i]+1){
            sort[i+1]=arr[i+1];
        }
    }
    printf("%d",sort[n-2]);
    return 0;
}