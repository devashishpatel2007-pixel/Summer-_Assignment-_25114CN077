#include <stdio.h>
#include <string.h>

void findMaxOccurringChar(char str[]) {
    int count[256] = {0}; // Frequency array for all ASCII characters
    int maxCount = -1;
    char maxChar = ' ';
    int n = strlen(str);

    // 1. Fill the frequency array
    for (int i = 0; i < n; i++) {
        count[(unsigned char)str[i]]++;
    }

    // 2. Find the character with the maximum frequency
    for (int i = 0; i < n; i++) {
        if (count[(unsigned char)str[i]] > maxCount) {
            maxCount = count[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("The maximum occurring character is '%c', which appears %d times.\n", maxChar, maxCount);
}

int main() {
    char str[] = "geeksforgeeks";
    findMaxOccurringChar(str);
    return 0;
}