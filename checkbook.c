#include<stdio.h>
int main(){
    float balance= 1000,amount;
    int choice;
    printf("1.Deposit\n2.Withdrawl\n");
    scanf("%d",&choice);
    if (choice==1){
        printf("Enter the Deposit Amount:");
        scanf("%f",&amount);
        balance+=amount;
    }
    else if(choice==2){
        printf("Enter the debit Amount:");
        scanf("%f",&amount);
        balance-=amount;
    }
    printf("Current Balance: %.2f",balance);
    return 0;
}