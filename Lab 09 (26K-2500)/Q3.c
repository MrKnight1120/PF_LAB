/*
    Programmer: Muhammad Usaid
    NU-ID: 26K-2500
    Date: 09/11/2026
    Desc: Digital Image Brightness
*/

#include <stdio.h>

int main(){
    int image[3][3];
    int (*ptr)[3] = image;
    int i, j;
    printf("Enter values for 9 pixels:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", (*(ptr + i) + j));
        } // end for
    } // end for

    // increase image brightness
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            *(*(ptr + i) + j) = *(*(ptr + i) + j) * 2;
        } // end for
    } // end for
    printf("\nUpdated Image Matrix:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", *(*(ptr + i) + j));
        } // end for
        printf("\n");
    } // end for

    return 0;
} // end main