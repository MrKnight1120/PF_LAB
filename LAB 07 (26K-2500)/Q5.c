#include <stdio.h>

int main() {
    char sentences[3][100];
    int vowel_counts[3] = {0};

    printf("Enter 3 semicolon-separated sentences: \n");
    for (int i = 0; i < 3; i++) {
        scanf(" %99[^;]", sentences[i]);
        if (i < 2) {
            scanf("%*c");
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; sentences[i][j] != '\0'; j++) {
            char ch = sentences[i][j];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowel_counts[i]++;
            }
        }
    }

    printf("\n--- Vowel Density Report ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Sentence %d: %s | Vowels: %d\n", i + 1, sentences[i], vowel_counts[i]);
    }

    return 0;
}