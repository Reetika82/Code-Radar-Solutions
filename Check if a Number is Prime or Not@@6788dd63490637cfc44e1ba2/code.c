#include <stdio.h>

int main(){
    int num, flag= 0;
    scanf("%d",&num);
    
    if (num <= 1){
        printf("Not Prime");
    }

    for (i = 2; i <= num/2 ;++1){
        if (num%i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 0) printf("Prime");
    else printf("Not Prime");
    
    return 0;
}