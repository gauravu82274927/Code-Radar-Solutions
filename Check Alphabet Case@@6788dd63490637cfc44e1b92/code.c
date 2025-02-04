#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=65 && a<=90){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}