#include <stdio.h>
int main(){
    char name,hobby[100];
    int age;
    scanf("%c",&name);
    scanf("%d",&age);
    scanf("%c",&hobby);
    printf("Name: %c \n Age: %d \n Hobby: %c",name, age, hobby);
    return 0;
}