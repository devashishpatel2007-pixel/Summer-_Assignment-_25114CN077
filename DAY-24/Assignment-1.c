#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are different, they cannot be rotations
    if (len1 != len2) {
        return false;
    }

    // Create a temporary buffer to hold str1 + str1
    // Size is 2 * len1 + 1 (for null terminator)
    char temp[2 * len1 + 1];

    strcpy(temp, str1);
    strcat(temp, str1);

    // Use strstr to check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL) {
        return true;
    }

    return false;
}

int main() {
    char s1[] = "ABCD";
    char s2[] = "CDAB";

    if (isRotation(s1, s2)) {
        printf("'%s' is a rotation of '%s'\n", s2, s1);
    } else {
        printf("'%s' is NOT a rotation of '%s'\n", s2, s1);
    }

    return 0;
}