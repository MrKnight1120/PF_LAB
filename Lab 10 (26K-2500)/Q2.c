/*
    Programmer: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 18/11/2026
    Desc: Student Names Alphabetical Sorting
*/

#include <stdio.h>
#include <string.h>

int main(){
    char names[10][50];
    char temp[50];
    int i, j;

    printf("Enter names of 10 students:\n");

    for (i=0; i<10; i++){
        printf("Enter name %d: ", i+1);
        scanf(" %[^\n]", names[i]);
    } // end for

    for (i=0; i<9; i++){
        for (j=0; j<9-i; j++){
            if (strcmp(names[j], names[j+1]) > 0){
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            } // end if
        } // end for
    } // end for
    printf("\nStudent Names in Alphabetical Order:\n");

    for (i=0; i<10; i++){
        printf("%s\n", names[i]);
    } // end for

    return 0;
} // end main