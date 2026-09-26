#include <stdio.h>

int main()
{
    int permission;

    printf("Permissions: View = 1, Train = 2, Test = 4, Deploy = 8\n");
    printf("Add the required values, or enter 0 for no permissions.\n");
    printf("Enter permission value (0 to 15): ");
    scanf("%d", &permission);

    if (permission < 0 || permission > 15)
    {
        printf("Invalid permission value.\n");
        return 0;
    }

    if (permission & 1)
        printf("View: Allowed\n");
    else
        printf("View: Not Allowed\n");
    if (permission & 2)
        printf("Train: Allowed\n");
    else
        printf("Train: Not Allowed\n");
    if (permission & 4)
        printf("Test: Allowed\n");
    else
        printf("Test: Not Allowed\n");
    if (permission & 8)
        printf("Deploy: Allowed\n");
    else
        printf("Deploy: Not Allowed\n");

    if ((permission & 2) && (permission & 8))
        printf("Both training and deployment are allowed.\n");
    else
        printf("Training and deployment are not both allowed.\n");
    return 0;
}
