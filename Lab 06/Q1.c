#include <stdio.h>

int main()
{
    int pin;
    int digit;
    int sum = 0;

    printf("Enter a 4 digit pin: ");
    scanf("%d", &pin);

    if (pin < 1000 || pin > 9999)
    {
        printf("Invalid input. Please enter a 4 digit pin.\n");
        return 1;
    }

    for (int i = 0; i < 4; i++)
    {
        digit = pin % 10;
        sum = sum + digit;
        pin = pin / 10;
    }

    printf("Sum of pin digits: %d\n", sum);

    if (sum > 10)
    {
        printf("Strong PIN\n");
    }
    else
    {
        printf("Weak PIN\n");
    }

    return 0;
}