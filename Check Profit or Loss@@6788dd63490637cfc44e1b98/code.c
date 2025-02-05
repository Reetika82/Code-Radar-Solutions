#include <stdio.h>

int main(){
    int CP,SP;
    scanf("%d %d",&CP,&SP);

    if (CP < SP) printf("Profit");
    if(CP > SP) printf("Loss");
    else(CP == SP) printf("No Profit No Loss");
    return 0;
}