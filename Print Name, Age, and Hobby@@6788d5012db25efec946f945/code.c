#include <stdio.h>


int main(){
    char str1[10];
    int age;
    char str2[10];
    

    scanf("%s",&str1);
    scanf("%s",&str2);
    scanf("%d",&age);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",age);
    printf("Hobby: %s",str2);
    return 0;    
}