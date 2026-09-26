#include <stdio.h>

int main()
{
    int age, creditscore, existingloan;
    float income;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly income: ");
    scanf("%f", &income);
    printf("Enter credit score: ");
    scanf("%d", &creditscore);
    printf("Existing loan (1 = Yes, 0 = No): ");
    scanf("%d", &existingloan);

    if (age < 0 || income < 0 || creditscore < 0 ||
        (existingloan != 0 && existingloan != 1))
        printf("Invalid input.\n");
    else if (age >= 21 && income >= 100000 && creditscore >= 750 && existingloan == 0)
        printf("High Approval Chance\n");
    else if (age >= 21 && income >= 75000 && creditscore >= 650 && existingloan == 1)
        printf("Manual Review\n");
    else if (age >= 21 && income >= 50000 && creditscore >= 600)
        printf("Possibly Eligible\n");
    else
        printf("Rejected\n");
    return 0;
}
