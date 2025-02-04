#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9'){
         printf("Digit",ch);
    }
    else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||ch=='a' || ch == 'i'|| ch == 'e'|| ch == 'o' ||ch == 'u'){
         printf("Vowel",ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant",ch);
    }
    else {
        (printf("Special Character"));
    }
    return 0;
}