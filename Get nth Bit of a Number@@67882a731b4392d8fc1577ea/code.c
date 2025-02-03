#include <stdio.h>

int main(){
    unsigned int num;
    int n , bitvalue;
    scanf("%u",&num);

    scanf("%d",&n);

    if (n<0 || n>31) printf("1");
    else printf("0");
    return 0;
}