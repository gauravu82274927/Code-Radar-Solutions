#include <stdio.h>
int main(){
    char name,hobby[100];
    int age;
    scanf("%c %d %c",&name, &age, &hobby);
    printf("Name: %c\nAge: %d\nHobby: %c",name, age, hobby);
    return 0;
}