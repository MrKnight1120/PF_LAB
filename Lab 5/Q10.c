#include <stdio.h>
#include <math.h>

int main()
{
    float accuracy, confidence, modelscore;
    int datasetsize, userrole, modelstatus, permission, ready;

    printf("Enter model accuracy and confidence: ");
    scanf("%f %f", &accuracy, &confidence);
    printf("Enter dataset size: ");
    scanf("%d", &datasetsize);
    printf("User role (1 = Admin, 2 = Developer, 3 = Researcher): ");
    scanf("%d", &userrole);
    printf("Model status (1 = Ready, 2 = Testing, 3 = Training): ");
    scanf("%d", &modelstatus);
    printf("Permissions: View = 1, Train = 2, Test = 4, Deploy = 8\n");
    printf("Enter the sum of permission values (0 to 15): ");
    scanf("%d", &permission);

    if (accuracy < 0 || accuracy > 100 || confidence < 0 || confidence > 100 ||
        datasetsize < 0 || userrole < 1 || userrole > 3 || modelstatus < 1 ||
        modelstatus > 3 || permission < 0 || permission > 15)
    {
        printf("Invalid input.\n");
        return 0;
    }

    switch (userrole)
    {
        case 1:
            printf("User Role: Admin\n");
            switch (modelstatus)
            {
                case 1: printf("Model Status: Ready\n"); break;
                case 2: printf("Model Status: Testing\n"); break;
                case 3: printf("Model Status: Training\n"); break;
            }
            break;
        case 2:
            printf("User Role: Developer\n");
            switch (modelstatus)
            {
                case 1: printf("Model Status: Ready\n"); break;
                case 2: printf("Model Status: Testing\n"); break;
                case 3: printf("Model Status: Training\n"); break;
            }
            break;
        case 3:
            printf("User Role: Researcher\n");
            switch (modelstatus)
            {
                case 1: printf("Model Status: Ready\n"); break;
                case 2: printf("Model Status: Testing\n"); break;
                case 3: printf("Model Status: Training\n"); break;
            }
            break;
    }

    modelscore = (accuracy + confidence) / 2.0;
    printf("Accuracy: %.2f%%\n", accuracy);
    printf("Confidence: %.2f%%\n", confidence);
    printf("Dataset Size: %d\n", datasetsize);
    printf("Model Score: %.2f\n", modelscore);
    printf("Score rounded down: %.0f\n", floor(modelscore));
    printf("Size of model score variable: %zu bytes\n", sizeof(modelscore));
    printf("Deployment Permission: %s\n", (permission & 8) ? "Yes" : "No");

    ready = 0;
    if (accuracy >= 80 && confidence >= 75)
    {
        if (datasetsize >= 1000 && modelstatus == 1)
        {
            if (permission & 8)
                ready = 1;
        }
    }

    if (ready == 1)
        printf("Deployment Ready\n");
    else
        printf("Not Ready for Deployment\n");
    return 0;
}
