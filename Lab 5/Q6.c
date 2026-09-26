#include <stdio.h>

int main()
{
    int category, choice;

    printf("Model Selection\n");
    printf("1. Classification\n");
    printf("2. Regression\n");
    printf("3. Clustering\n");
    printf("4. Computer Vision\n");
    printf("Enter category: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("1. Logistic Regression\n");
            printf("2. Decision Tree\n");
            printf("3. KNN\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Classification: Logistic Regression\n");
                    break;
                case 2:
                    printf("Classification: Decision Tree\n");
                    break;
                case 3:
                    printf("Classification: KNN\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        case 2:
            printf("1. Linear Regression\n");
            printf("2. Polynomial Regression\n");
            printf("3. SVR\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Regression: Linear Regression\n");
                    break;
                case 2:
                    printf("Regression: Polynomial Regression\n");
                    break;
                case 3:
                    printf("Regression: SVR\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        case 3:
            printf("1. K-Means\n");
            printf("2. Hierarchical Clustering\n");
            printf("3. DBSCAN\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Clustering: K-Means\n");
                    break;
                case 2:
                    printf("Clustering: Hierarchical Clustering\n");
                    break;
                case 3:
                    printf("Clustering: DBSCAN\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;
        case 4:
            printf("1. CNN\n");
            printf("2. YOLO\n");
            printf("3. R-CNN\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
                case 1:
                    printf("Computer Vision: CNN\n");
                    break;
                case 2:
                    printf("Computer Vision: YOLO\n");
                    break;
                case 3:
                    printf("Computer Vision: R-CNN\n");
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
