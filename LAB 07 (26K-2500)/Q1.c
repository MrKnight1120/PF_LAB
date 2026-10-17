#include <stdio.h>

int main() {
    char student_names[3][50];
    int marks[3][3];
    float averages[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", student_names[i]);
        
        printf("Enter 3 marks for student %d: ", i + 1);
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
            sum += marks[i][j];
        }
        averages[i] = (float)sum / 3.0;
    }

    printf("\n--- Student Report ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s | Average Marks: %.2f\n", student_names[i], averages[i]);
    }

    return 0;
}