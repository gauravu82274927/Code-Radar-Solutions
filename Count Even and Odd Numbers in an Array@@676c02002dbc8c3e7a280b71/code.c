#include<stdio.h>
int main(){
    int n,b;
    scanf("%d",n);
    int arr[];
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[]);
    }
    int even=0,odd=0;
    for(i=0;i<n;i++){
        if arr[i]%2==0{
            even+=1;
        }
        else if arr[i]%2!=0{
            odd+=1;
        }
    }
    printf("%d ",even);
    printf("%d",odd);
    return 0;
}