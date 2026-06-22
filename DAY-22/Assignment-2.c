#include <stdio.h>

int main() {
    char sentence[200];
    int count = 0, i;

    printf("Enter a sentence: ");
    // Use %[^\n] to read the entire line including spaces
    scanf("%[^\n]s", sentence);

    // If the string is not empty, start count at 1
    if (sentence[0] != '\0') {
        count = 1;
    }

    for (i = 0; sentence[i] != '\0'; i++) {
        // A word starts when we find a space followed by a non-space character
        if (sentence[i] == ' ' && sentence[i + 1] != ' ' && sentence[i + 1] != '\0') {
            count++;
        }
    }

    printf("Total number of words: %d\n", count);

    return 0;
}