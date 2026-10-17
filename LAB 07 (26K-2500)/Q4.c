#include <stdio.h>
#include <string.h>

int main() {
    char word_grid[3][100];
    char longest_word[100] = "";
    int max_len = 0;
    int best_i = 0, best_j = 0;

    for (int i = 0; i < 3; i++) {
        printf("Enter 3 space-separated words for row %d: ", i + 1);
        scanf(" %[^\n]", word_grid[i]);
    }

    for (int i = 0; i < 3; i++) {
        char temp[100];
        int col = 0;
        int t_idx = 0;
        
        for (int j = 0; ; j++) {
            if (word_grid[i][j] == ' ' || word_grid[i][j] == '\0') {
                temp[t_idx] = '\0';
                int len = strlen(temp);
                if (len > max_len) {
                    max_len = len;
                    strcpy(longest_word, temp);
                    best_i = i;
                    best_j = col;
                }
                col++;
                t_idx = 0;
                if (word_grid[i][j] == '\0') {
                    break;
                }
            } else {
                temp[t_idx++] = word_grid[i][j];
            }
        }
    }

    printf("Longest word: %s (Length: %d) at Row Index %d, Column Index %d\n", longest_word, max_len, best_i, best_j);

    return 0;
}