#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    for (int i = 2; i<=num/2; i++){
       if (num % i == 0){
        printf("Not Prime");
        break;
       }else {printf("Prime");
       break;}
    }
    
    return 0;
}