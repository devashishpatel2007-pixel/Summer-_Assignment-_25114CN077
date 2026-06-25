#include <stdio.h>
#include <string.h>

void findCommonCharacters(char str1[], char str2[]) {
    int freq1[256] = {0};
    int freq2[256] = {0};

    // Count frequency of characters in the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        freq1[(int)str1[i]]++;
    }

    // Count frequency of characters in the second string
    for (int i = 0; str2[i] != '\0'; i++) {
        freq2[(int)str2[i]]++;
    }

    printf("Common characters: ");
    // Check characters that appear in both
    for (int i = 0; i < 256; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            printf("%c ", (char)i);
        }
    }
    printf("\n");
}

int main() {
    char s1[] = "programming";
    char s2[] = "common";

    findCommonCharacters(s1, s2);

    return 0;
}