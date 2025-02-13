// Your code here...
#include<stdio.h>
int main(){
    char operator;
    int num1,num2;

    scanf("%d %d %c", &num1, &num2, &operator);
    switch(operator){
        case'+':
        printf("%d",num1 + num2);
        break;
        case'-':
        printf("%d", num1 - num2);
        break;
        case'*':
        printf("%d",num1*num2);
        break;
        case'/':
        if (num2 != 0){
            printf("%d",num1/num2);
        }else{
            printf("Division by zero is not allowed.");
        }
    }
    return 0;
}