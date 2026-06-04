 #include<stdio.h>
float balance=0.0;
void deposit(float amount){
    balance+=amount;
    printf("Amount deposited: %.2f\n",amount);
    printf("Current balance: %.2f\n",balance);
}
void withdraw(float amount){
    if(amount>balance){
        printf("Insufficient balance. Withdrawal failed.\n");
    }
    else{
        balance-=amount;
        printf("Amount withdrawn: %.2f\n",amount);
        printf("Current balance: %.2f\n",balance);
    }
}
int main(){
    int choice;
    float amount;
    while(1){
        printf("\nBank Management System\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter amount to deposit:");
                scanf("%f",&amount);
                deposit(amount);
                break;
            case 2:
                printf("Enter amount to withdraw:");
                scanf("%f",&amount);
                withdraw(amount);
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}