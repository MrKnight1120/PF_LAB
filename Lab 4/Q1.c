#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("All three numbers are equal: %d\n", a);
    }
    else if (a == b && a > c) {
        printf("First and second numbers are equal and greatest: %d\n", a);
    }
    else if (a == c && a > b) {
        printf("First and third numbers are equal and greatest: %d\n", a);
    }
    else if (b == c && b > a) {
        printf("Second and third numbers are equal and greatest: %d\n", b);
    }
    else if (a > b && a > c) {
        printf("First number is greatest: %d\n", a);
    }
    else if (b > a && b > c) {
        printf("Second number is greatest: %d\n", b);
    }
    else {
        printf("Third number is greatest: %d\n", c);
    }

    return 0;
}