/*
    Programmer: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 09/11/2026
    Desc: Calculate Final Bill
*/

#include <stdio.h>

float calculateDiscount(float amount, char membership){
    float discountRate, discount;

    if (membership == 'P' || membership == 'p'){
        discountRate = 20;
    }
    else if (membership == 'G' || membership == 'g'){
        discountRate = 10;
    }
    else{
        discountRate = 5;
    } // end if

    if (amount > 10000){
        discountRate = discountRate + 2;
    } // end if
    discount = amount * discountRate / 100;

    return discount;
} // end function

float calculateFinalBill(float discountedAmount){
    float tax, shipping, finalBill;
    tax = discountedAmount * 15 / 100;

    if (discountedAmount <= 5000){
        shipping = 300;
    }
    else{
        shipping = 0;
    } // end if
    finalBill = discountedAmount + tax + shipping;

    return finalBill;
} // end function

int main(){
    float amount, discount, discountedAmount, finalBill;
    char membership;

    printf("Enter shopping amount: ");
    scanf("%f", &amount);

    printf("Enter membership type (P/G/S): ");
    scanf(" %c", &membership);

    discount = calculateDiscount(amount, membership);
    discountedAmount = amount - discount;
    finalBill = calculateFinalBill(discountedAmount);

    printf("\nDiscount Amount: PKR %.2f", discount);
    printf("\nDiscounted Amount: PKR %.2f", discountedAmount);
    printf("\nFinal Payable Amount: PKR %.2f\n", finalBill);

    return 0;
} // end main