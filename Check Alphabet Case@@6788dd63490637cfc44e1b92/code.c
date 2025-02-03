#include <stdio.h>
#include<ctype.h>
int main(){
    char a1;
    scanf("%c",&a1);

    if (ch >= 'A' && ch <='Z' )  printf("Uppercase");
    else if(ch >= 'a' && ch <= 'z') printf("Lowercase");
    else printf("Not an alphabet");
    return 0;
}