#include <stdio.h>

int main(){

    int ticket_number, dig;
    int rev = 0;

    printf("Enter your ticket number: ");
    scanf("%d", &ticket_number);

    while(ticket_number != 0){

        dig = ticket_number % 10;
        rev = rev*10 + dig;
        ticket_number = ticket_number / 10;


    }

    printf("The reverse of the ticket number is: %d\n", rev);



    return 0;
}