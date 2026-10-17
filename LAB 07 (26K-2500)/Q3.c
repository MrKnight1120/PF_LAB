#include <stdio.h>

int main() {
    char secret_messages[3][100];
    int word_counts[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter secret message %d (uppercase and spaces only): ", i + 1);
        scanf(" %[A-Z ]", secret_messages[i]);
        
        int spaces = 0;
        for (int j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') {
                spaces++;
            }
        }
        word_counts[i] = spaces + 1;
    }

    printf("\n--- Filtered Messages Report ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Message: %s | Word Count: %d\n", secret_messages[i], word_counts[i]);
    }

    return 0;
}