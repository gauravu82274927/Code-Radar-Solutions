#include <stdio.h>
int main(){
    int a,b,d,e,f,g;
    char c;
    d=a+b;
    e=a-b;
    f=a*b;
    g=a/b;
    scanf("%d %d %c",&a,&b,&c);

    if(c="+"){
        printf("%d",d);
    }
    else if(c="-"){
        printf("%d",e);
    }
    else if(c="*"){
        printf("%d",f);
    }
    else if(c="/"){
        printf("%d",g);
    }
    return 0;
}