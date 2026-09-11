#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    character = getchar();

    printf("You entered: ");
    putchar(character);
    putchar('\n');

    return 0;
}