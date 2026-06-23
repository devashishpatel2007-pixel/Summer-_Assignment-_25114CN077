#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char str1[], char str2[]) {
    // If lengths differ, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    int count[256] = {0};

    // Increment count for str1, decrement for str2
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // If strings are anagrams, all counts must be back to 0
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char s1[] = "listen";
    char s2[] = "silent";

    if (areAnagrams(s1, s2)) {
        printf("Yes, '%s' and '%s' are anagrams.\n", s1, s2);
    } else {
        printf("No, '%s' and '%s' are not anagrams.\n", s1, s2);
    }

    return 0;
}