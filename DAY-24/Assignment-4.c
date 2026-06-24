#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void removeDuplicates(char* str) {
    int n = strlen(str);
    if (n == 0) return;

    // A boolean array to track ASCII characters (0-255)
    bool seen[256] = {false};
    
    // Result string buffer
    char res[n + 1];
    int resIdx = 0;

    for (int i = 0; i < n; i++) {
        // If character has not been seen before
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = true; // Mark as seen
            res[resIdx++] = str[i];             // Add to result
        }
    }
    
    res[resIdx] = '\0'; // Null-terminate the new string

    printf("Original: %s\n", str);
    printf("Result:   %s\n", res);
}

int main() {
    char str[] = "programming is fun";
    removeDuplicates(str);
    return 0;
}