#include <stdio.h>

int main(){
    unsigned int num;
    int n , bitvalue;
    scanf("%u",&num);

    scanf("%d",&n);

    if (n<0 || n>31) return 1;
    bitvalue = (num >> n) & 1;
    printf("%d",bitvalue);
    return 0;
}