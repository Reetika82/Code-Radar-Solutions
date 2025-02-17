int main() {
    int num;
    printf("Enter the vaalue:");
    scanf("%d",&num);

    for (int i = 2;i < num ;i++){
        if (num % i == 0){
            printf("%d is not prime",num);
            break;
        }else{
            printf("The number is prime");
            break;
        }
    }
    return 0;
}