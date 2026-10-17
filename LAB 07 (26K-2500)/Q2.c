#include <stdio.h>

int main() {
    char logs[3][30];
    int upper_count = 0;

    printf("Enter CSV log entry (username,status,timestamp): ");
    scanf(" %29[^,],%29[^,],%29[^\n]", logs[0], logs[1], logs[2]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; logs[i][j] != '\0'; j++) {
            if (logs[i][j] >= 'A' && logs[i][j] <= 'Z') {
                upper_count++;
            }
        }
    }

    printf("Total uppercase letters: %d\n", upper_count);

    return 0;
}