#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if ch=='a' || ch == 'i'|| ch == 'e'|| ch == 'o' ||ch == 'u' printf("Vowel",ch);
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) printf("Consonent",ch);
    else (printf("Special Character"));
    return 0;
}