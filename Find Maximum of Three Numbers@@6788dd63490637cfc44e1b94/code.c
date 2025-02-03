#include <stdio.h>

int main(){
    int a , b , c, max;
    scanf("%d %d %d",&a,&b,&c);

    if a>b && a>c printf("%d",a);
    if b>a && b>c printf("%d",b);
    if c>a && a>b printf("%d",c);
    return 0;
}