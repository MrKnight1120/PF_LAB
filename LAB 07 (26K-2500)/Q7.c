#include <stdio.h>

int main() {
    float sensor_data[3][4];

    printf("Enter sensor data for 3 days (3 rows, 4 columns):\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) {
            scanf("%f", &sensor_data[r][c]);
        }
    }

    int target_col;
    printf("Enter defective sensor column index to remove (0 to 3): ");
    scanf("%d", &target_col);

    for (int r = 0; r < 3; r++) {
        for (int c = target_col; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }

    printf("\n--- Updated 3x3 Matrix ---\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%.2f ", sensor_data[r][c]);
        }
        printf("\n");
    }

    return 0;
}