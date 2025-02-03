#include <stdio.h>

int main(){
    char ch;
    scanf("%c",ch);
    if ch=='a' || ch == 'i'|| ch == 'e'|| ch == 'o' ||ch == 'u' printf("Vowel");
    else if(!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) printf("Consonent");
    else (printf("Special Character"));
    return 0;
}