/*
    Prog: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 22/11/2026
    Desc: Digital Root Calculation
*/
#include <stdio.h>

int calculateChecksum(int transactionID){
    if(transactionID<10){
        return transactionID;
    }
    int sum=0;

    while(transactionID>0){
        sum=sum+transactionID % 10;
        transactionID = transactionID/10;
    }
    return calculateChecksum(sum);
} // end function

int main(){
    int transactionID;

    printf("Enter transaction ID: ");
    scanf("%d",&transactionID);
    printf("Digital Root: %d",calculateChecksum(transactionID));

    return 0;
} // end main