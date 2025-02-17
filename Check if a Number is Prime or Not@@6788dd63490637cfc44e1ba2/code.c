#include <stdio.h>

int main(){
    int num, flag= 0;
    scanf("%d",&num);
    
    if (num<=2){
        flag=0;
    }
    else{
        for(i=2;i*i<=num;i++){
            if(num%i==0){
            flag = 0;
            break;
            }
        }
    }



    if(flag == 1)
    {
         printf("Prime");
    }
    else printf("Not Prime");
    
    return 0;
}