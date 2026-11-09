/*
    Programmer: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 09/11/2026
    Desc: ATM Transactions
*/

#include <stdio.h>

void withdraw(float *balance, float amount){
    if (amount <= *balance){
        *balance = *balance - amount;
        printf("Withdrawal Successful.\n");
    }
    else{
        printf("Transaction Declined: Insufficient Balance\n");
    } // end if
} // end function

void deposit(float *balance, float amount){
    *balance = *balance + amount;
    printf("Deposit Successful.\n");
    printf("Updated Balance: PKR %.2f\n", *balance);
} // end function

int main(){
    float balance = 10000, amount;
    int choice;

    printf("Account Balance: PKR %.2f\n", balance);
    printf("\nSelect Transaction Type:\n");
    printf("1. Debit (Withdraw)\n");
    printf("2. Credit (Deposit)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter amount: ");
    scanf("%f", &amount);

    if (choice == 1){
        withdraw(&balance, amount);
    }
    else if (choice == 2){
        deposit(&balance, amount);
    }
    else{
        printf("Invalid Transaction Type.\n");
    } // end if
    printf("\nFinal Account Balance: PKR %.2f\n", balance);

    return 0;
} // end main