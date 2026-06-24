#include <stdio.h>
#include <string.h>

void compressString(char* str) {
    int n = strlen(str);
    if (n == 0) return;

    // Buffer to store result (in worst case, size is 2 * n)
    char res[2 * n + 1]; 
    int resIdx = 0;

    for (int i = 0; i < n; i++) {
        int count = 1;
        
        // Count consecutive occurrences
        while (i + 1 < n && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Store the character
        res[resIdx++] = str[i];
        
        // Store the count as a string
        char countStr[10];
        sprintf(countStr, "%d", count);
        
        for (int j = 0; countStr[j] != '\0'; j++) {
            res[resIdx++] = countStr[j];
        }
    }
    res[resIdx] = '\0';

    printf("Original: %s\n", str);
    printf("Compressed: %s\n", res);
}

int main() {
    char str[] = "AAAABBBCCCDD";
    compressString(str);
    return 0;
}