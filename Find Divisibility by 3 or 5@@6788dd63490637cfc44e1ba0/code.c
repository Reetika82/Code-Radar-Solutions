#include <stdio.h>

int main(){
    int a ;
    scanf("%d",&a);

    if ((a%3 == 0) && (a%5==0)) printf("Divisile by Both");
    if(a%3==0) printf("Divisible by 3");
    if(a%5==0) printf("Divisble by 5");
    return 0;
}