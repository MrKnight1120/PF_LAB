/*
    Programmer: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 18/11/2026
    Desc: User Authentication System
*/

#include <stdio.h>
#include <string.h>

int main(){
    char username[50], password[50];
    char savedUsername[50], savedPassword[50];
    FILE *fptr;

    printf("Enter Username: ");
    scanf("%49s", username);

    printf("Enter Password: ");
    scanf("%49s", password);

    fptr = fopen("credentials.txt", "r");

    if (fptr == NULL){
        printf("Error: File Not Found!\n");
    } // end if
    else{
        fscanf(fptr, "%49s %49s", savedUsername, savedPassword);

        if (strcmp(username, savedUsername) == 0 && strcmp(password, savedPassword) == 0){
            printf("Access Granted!\n");
        } // end if
        else{
            printf("Access Denied!\n");
        } // end else
        fclose(fptr);
    } // end else

    return 0;
} // end main