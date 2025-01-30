#include <stdio.h>


int main(){
    char str1[100];
    char str2[100];
    int age;

    scanf("%s",&str1);
    scanf("%s",&str2);
    scanf("%d",&age);

    printf("Name: %s/nAge: %d/nHobby: %s",str1,age,str2);


    return 0;
    
}