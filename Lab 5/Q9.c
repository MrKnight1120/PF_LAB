#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float number, base, exponent;

    printf("1. Square Root\n2. Power\n3. Absolute Value\n4. Floor\n5. Ceiling\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%f", &number);
            if (number < 0)
                printf("Square root requires a nonnegative number.\n");
            else
                printf("Square root: %.2f\n", sqrt(number));
            break;
        case 2:
            printf("Enter base and exponent: ");
            scanf("%f %f", &base, &exponent);
            if (base == 0 && exponent <= 0)
                printf("Invalid power input for this calculator.\n");
            else if (base < 0 && floor(exponent) != exponent)
                printf("A negative base requires an integer exponent for this calculator.\n");
            else
                printf("Power: %.2f\n", pow(base, exponent));
            break;
        case 3:
            printf("Enter a number: ");
            scanf("%f", &number);
            printf("Absolute value: %.2f\n", fabs(number));
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%f", &number);
            printf("Floor: %.2f\n", floor(number));
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%f", &number);
            printf("Ceiling: %.2f\n", ceil(number));
            break;
        default:
            printf("Invalid menu choice.\n");
    }
    return 0;
}
