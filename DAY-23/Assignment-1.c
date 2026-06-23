#include <stdio.h>
#include <string.h>

void findFirstNonRepeating(char str[]) {
    int count[256] = {0}; // Array to store frequency of all characters
    int n = strlen(str);

    // 1. Count occurrences of each character
    for (int i = 0; i < n; i++) {
        count[(unsigned char)str[i]]++;
    }

    // 2. Find the first character with a count of 1
    for (int i = 0; i < n; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            printf("The first non-repeating character is: %c\n", str[i]);
            return;
        }
    }

    printf("No non-repeating character found.\n");
}

int main() {
    char str[] = "swiss";
    findFirstNonRepeating(str);
    return 0;
}