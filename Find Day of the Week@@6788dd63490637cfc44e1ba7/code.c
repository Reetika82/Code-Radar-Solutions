#include <stdio.h>

int main(){
    int number;
    scanf("%d",&number);
    if (number > 7 || number < 1) printf("Invalid");
    else{ switch(number){
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
        
    }}
    return 0;
}