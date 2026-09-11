#include <stdio.h>

int main() {
    char fullname[50];

    printf("Enter your full name: ");
    fgets(fullname, 50, stdin);

    printf("\nHello,\n %c", fullname);

    return 0;
}