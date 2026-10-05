#include <stdio.h>

int main(){

    long long n;
    int dig, even = 0, odd = 0;

    printf("Enter a number: ");
    scanf("%lld", &n);

    for(long long i = 1; n != 0; i++){

        dig = n % 10;
        if(dig % 2 == 0){
            even++;
        }
        else{
            odd++;
        }

        n = n / 10;
        
    }

    printf("Total Even digits: %d\n", even);
    printf("Total Odd digits: %d\n", odd);



    return 0 ;
}