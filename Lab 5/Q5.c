#include <stdio.h>

int main()
{
    float confidence;
    int usertype;

    printf("Enter recognition confidence (0 to 100): ");
    scanf("%f", &confidence);
    printf("User type (1 = Authorized, 2 = Unauthorized): ");
    scanf("%d", &usertype);

    if (confidence < 0 || confidence > 100 || (usertype != 1 && usertype != 2))
    {
        printf("Invalid input.\n");
        return 0;
    }

    if (confidence >= 80)
    {
        printf("Face Recognized\n");
        printf("%s\n", (confidence >= 80 && usertype == 1) ? "Access Granted" : "Access Denied");
    }
    else
    {
        if (confidence < 50 || usertype == 2)
            printf("Access Denied\n");
        else
            printf("Manual Verification Required\n");
    }
    return 0;
}
