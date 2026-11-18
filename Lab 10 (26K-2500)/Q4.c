/*
    Programmer: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 18/11/2026
    Desc: ATM Transaction Logging System
*/
#include <stdio.h>

int main(){
    char name[50];
    int account;
    float amount;
    FILE *fptr;

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Account Number: ");
    scanf("%d", &account);

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amount);
    fptr = fopen("bank_log.txt", "a");

    if (fptr == NULL){
        printf("File could not be opened.\n");
    } // end if
    else{
        fprintf(fptr, "Customer Name: %s\n", name);
        fprintf(fptr, "Account Number: %d\n", account);
        fprintf(fptr, "Withdrawal Amount: %.2f\n", amount);
        fprintf(fptr, "-------------------------\n");
        fclose(fptr);
        printf("Transaction details saved successfully.\n");
    } // end else

    return 0;
} // end main