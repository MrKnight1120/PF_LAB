/*
    Programmer: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 18/11/2026
    Desc: Customer Feedback Sentiment Analysis
*/

#include <stdio.h>
#include <string.h>

int main(){
    char feedback[500];
    char updated[600];
    char *ptr;
    int len, i;

    printf("Enter customer feedback:\n");
    fgets(feedback, sizeof(feedback), stdin);
    len = strlen(feedback);

    if (feedback[len-1] == '\n'){
        feedback[len-1] = '\0';
        len--;
    } // end if

    printf("\nTotal characters: %d\n", len);

    if (strstr(feedback, "good") != NULL){
        printf("Sentiment: Positive\n");
    } // end if

    if (strstr(feedback, "bad") != NULL){
        printf("Sentiment: Negative\n");
        strcpy(updated, "");
        ptr = feedback;

        while (strstr(ptr, "bad") != NULL){
            char *found = strstr(ptr, "bad");
            strncat(updated, ptr, found-ptr);
            strcat(updated, "not good");
            ptr = found + 3;
        } // end while

        strcat(updated, ptr);
        printf("Updated review: %s\n", updated);
    } // end if

    if (strstr(feedback, "good") == NULL && strstr(feedback, "bad") == NULL){
        printf("Sentiment: Neutral\n");
    } // end if

    return 0;
} // end main