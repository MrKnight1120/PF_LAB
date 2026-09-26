#include <stdio.h>

int main()
{
    int category, choice;

    printf("Image Classification\n");
    printf("1. Animal\n");
    printf("2. Vehicle\n");
    printf("3. Food\n");
    printf("4. Human\n");
    printf("Enter category: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("1. Cat\n");
            printf("2. Dog\n");
            printf("3. Bird\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Animal: Cat\n");
                    break;
                case 2:
                    printf("Animal: Dog\n");
                    break;
                case 3:
                    printf("Animal: Bird\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        case 2:
            printf("1. Car\n");
            printf("2. Bus\n");
            printf("3. Bike\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Vehicle: Car\n");
                    break;
                case 2:
                    printf("Vehicle: Bus\n");
                    break;
                case 3:
                    printf("Vehicle: Bike\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        case 3:
            printf("1. Pizza\n");
            printf("2. Burger\n");
            printf("3. Biryani\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Food: Pizza\n");
                    break;
                case 2:
                    printf("Food: Burger\n");
                    break;
                case 3:
                    printf("Food: Biryani\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        case 4:
            printf("1. Male\n");
            printf("2. Female\n");
            printf("3. Child\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Human: Male\n");
                    break;
                case 2:
                    printf("Human: Female\n");
                    break;
                case 3:
                    printf("Human: Child\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        default:
            printf("Invalid category.\n");
    }
    return 0;
}
