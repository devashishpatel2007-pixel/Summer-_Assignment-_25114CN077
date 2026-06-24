#include <stdio.h>
#include <string.h>

void findLongestWord(char* str) {
    char copy[strlen(str) + 1];
    strcpy(copy, str); // Copy str because strtok modifies the input string

    char *token = strtok(copy, " ");
    char longest[100] = ""; 
    int maxLength = 0;

    while (token != NULL) {
        int currentLength = strlen(token);
        
        // Check if current word is longer than the one saved
        if (currentLength > maxLength) {
            maxLength = currentLength;
            strcpy(longest, token);
        }
        
        token = strtok(NULL, " "); // Get next word
    }

    printf("The longest word is: '%s' with length %d\n", longest, maxLength);
}

int main() {
    char text[] = "The quick brown fox jumps over the lazy dog";
    findLongestWord(text);
    return 0;
}