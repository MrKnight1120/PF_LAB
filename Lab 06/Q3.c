#include <stdio.h>

int main(){

    int attendance[15];
    int present = 0;
    int absent = 0;

    printf("Present = 1 | Absent = 0\n");

    for(int i = 0; i < 15; i++){

        printf("Student %d :", i+1);
        scanf("%d", &attendance[i]);

        if(attendance[i] != 0 && attendance[i] != 1){
            printf("Invalid input. Please enter 1 for present or 0 for absent.\n");
            i--;
        }
        else if(attendance[i] == 1){
            present++;
        }
        else{
            absent++;
        }

    }

    printf("Total Present: %d\n", present);
    printf("Total Absent: %d\n", absent);

    return 0;
}