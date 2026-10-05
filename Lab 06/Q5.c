#include <stdio.h>

int main(){

    int n;
    unsigned long long fact2n = 1;
    unsigned long long factn = 1;
    unsigned long long factn1 = 1;
    unsigned long long cat;

    printf("Enter a integer: ");
    scanf("%d", &n);

    if(n < 0 || n > 10){
        printf("Please enter a number between 0 and 10.\n");
        return 0 ;
    }

    for(int i = 1; i <= 2 * n; i++){
        fact2n = fact2n * i;
    }

    for(int i = 1; i <= n; i++){
        factn = factn * i;
    }

    for(int i = 1; i <= n + 1; i++){
        factn1 = factn1 * i;
    }

    cat = fact2n / (factn1 * factn);

    printf("The %dth Catalan number is: %llu\n", n, cat);


  return 0 ;  
}