/*
    Programmer: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 18/11/2026
    Desc: Email Domain Extraction
*/

#include <stdio.h>
#include <string.h>

int main(){
    char email[100];
    char domain[100];
    char *ptr;

    printf("Enter employee email address:\n");
    scanf("%99s", email);
    ptr = strchr(email, '@');

    if (ptr == NULL){
        printf("Invalid Email Format\n");
    } // end if
    else{
        strcpy(domain, ptr+1);
        printf("Extracted Domain: %s\n", domain);
    } // end else

    return 0;
} // end main