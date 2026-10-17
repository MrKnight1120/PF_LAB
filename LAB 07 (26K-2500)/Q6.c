#include <stdio.h>

int main() {
    int shifts[4][3];

    printf("Enter initial 3x3 production data:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &shifts[i][j]);
        }
    }

    int target_index;
    printf("Enter target row index for insertion (0 to 2): ");
    scanf("%d", &target_index);

    int new_row[3];
    printf("Enter 3 new production values: ");
    for (int j = 0; j < 3; j++) {
        scanf("%d", &new_row[j]);
    }

    for (int i = 3; i > target_index; i--) {
        for (int j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j];
        }
    }

    for (int j = 0; j < 3; j++) {
        shifts[target_index][j] = new_row[j];
    }

    printf("\n--- Resulting 4x3 Matrix ---\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", shifts[i][j]);
        }
        printf("\n");
    }

    return 0;
}