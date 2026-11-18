/*
    Programmer: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 18/11/2026
    Desc: Student Marks Record
*/

#include <stdio.h>

int main(){
    int rollNo, marks;
    char name[50];
    FILE *fptr;

    fptr = fopen("marks.txt", "r");

    if (fptr == NULL){
        printf("Error: File Not Found!\n");
    } // end if
    else{
        printf("Student Marks Record\n");
        printf("---------------------------------------------\n");
        printf("Roll No\t\tName\t\tMarks\n");
        printf("---------------------------------------------\n");

        while (fscanf(fptr, "%d %49s %d", &rollNo, name, &marks) == 3){
            printf("%d\t\t%s\t\t%d\n", rollNo, name, marks);
        } // end while

        fclose(fptr);
    } // end else

    return 0;
} // end main