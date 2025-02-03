#include <stdio.h>

int main(){
    unsigned int num;
    int n , bitvalue;
    scanf("%u",&num);

    scanf("%d",&n);

    if (n<0 || n>31) printf("0");
    else printf("1");
    return 0;
}