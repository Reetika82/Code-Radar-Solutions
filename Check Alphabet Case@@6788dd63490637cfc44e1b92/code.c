#include <stdio.h>
#include<ctype.h>
int main(){
    char a1;
    scanf("%c",&a1);

    if (a1 >= 'A' && a1 <='Z' )  printf("Uppercase");
    else if(a1 >= 'a' && a1 <= 'z') printf("Lowercase");
    else printf("Not an alphabet");
    return 0;
}