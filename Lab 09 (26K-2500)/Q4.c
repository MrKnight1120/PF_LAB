/*
    Programmer: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 09/11/2026
    Desc: Function Pointers
*/

#include <stdio.h>

int add(int a, int b){
    return a + b;
} // end function

int multiply(int a, int b){
    return a * b;
} // end function

int findMax(int a, int b){
    if (a > b){
        return a;
    }
    else{
        return b;
    } // end if
} // end function

int compute(int a, int b, int (*ptr)(int, int)){
    return ptr(a, b);
} // end function

int main(){
    int num1, num2;
    int sum, product, maximum;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    sum = compute(num1, num2, add);
    product = compute(num1, num2, multiply);
    maximum = compute(num1, num2, findMax);

    printf("\nSum: %d", sum);
    printf("\nProduct: %d", product);
    printf("\nMaximum: %d\n", maximum);

    return 0;
} // end main