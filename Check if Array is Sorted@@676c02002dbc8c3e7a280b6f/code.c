#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int sorted =1;
    for(int i=1;i<a;i++){
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