#include <stdio.h>

int main() {
    int total, missing, duplicates;
    float missingPercent, duplicatePercent;

    printf("Enter total number of records: ");
    scanf("%d", &total);

    printf("Enter number of missing records: ");
    scanf("%d", &missing);

    printf("Enter number of duplicate records: ");
    scanf("%d", &duplicates);

    if (total <= 0) {
        printf("Invalid Dataset\n");
    }
    else if (missing < 0 || duplicates < 0 ||
             missing > total || duplicates > total) {
        printf("Invalid Dataset\n");
    }
    else {
        missingPercent = missing * 100.0 / total;
        duplicatePercent = duplicates * 100.0 / total;

        printf("Missing records: %.2f%%\n", missingPercent);
        printf("Duplicate records: %.2f%%\n", duplicatePercent);

        if (missingPercent > 30) {
            printf("Poor Quality Dataset\n");
        }
        else if (duplicatePercent > 20) {
            printf("Dataset Requires Cleaning\n");
        }
        else {
            printf("Dataset Ready for Training\n");
        }
    }

    return 0;
}