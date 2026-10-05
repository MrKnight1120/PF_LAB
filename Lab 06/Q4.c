#include <stdio.h>

int main(){

    int bk_num;
    int check = 1;
    int length = 0;
    int t;
    int rev = 0;

    printf("Enter your book code: ");
    scanf("%d", &bk_num);
    check = bk_num;

    for(int i = 0; check != 0; i++){
        t = check % 10;
        rev = rev * 10 + t;
        check = check / 10;
    }

    if(rev == bk_num){
        printf("Your book code is valid.\n");
    } 
    else {
        printf("Your book code is invalid.\n");
    }

    return 0;
}