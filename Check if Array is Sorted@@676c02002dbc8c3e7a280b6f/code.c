#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[a]);
    }
    int sorted =1;
    for(i=0;i<a;i++){
        if(arr[i]<arr[i-1]){
            sorted=0;
            break;
        }
    }
    if(sorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}