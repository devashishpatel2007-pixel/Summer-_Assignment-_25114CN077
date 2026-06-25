#include <stdio.h>
#include <string.h>

int main() {
    // Array of words
    char words[5][20] = {"apple", "kiwi", "banana", "fig", "cherry"};
    char temp[20];
    int n = 5;

    // Bubble Sort based on string length
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare lengths instead of dictionary order
            if (strlen(words[j]) > strlen(words[j + 1])) {
                // Swap the strings
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}