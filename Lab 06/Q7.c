#include <stdio.h>

int main(){

    int n, i, j;
    printf("Enter half-height (1 to 50): ");
    scanf("%d", &n);

    if (n < 1 || n > 50){

     printf("Invalid size\n");
     return 0;
 }
    for (i = 1; i <= n; i++){

     for (j = 1; j <= n - i; j++){

        printf(" ");
     }

     printf("*");

     if (i > 1){

        for (j = 1; j <= 2 * i - 3; j++){

          printf(" ");
        }
        printf("*");
     }
     printf("\n");
 }
 for (i = n - 1; i >= 1; i--){

    for (j = 1; j <= n - i; j++){

      printf(" ");
    }
    printf("*");

    if (i > 1){

        for (j = 1; j <= 2 * i - 3; j++){

           printf(" ");
}
        printf("*");
 }
    printf("\n");
}


 return 0 ;   
}