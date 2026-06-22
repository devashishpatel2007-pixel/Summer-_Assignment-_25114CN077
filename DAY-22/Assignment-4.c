#include <stdio.h>

int main() {
    char str[200];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Iterate through the string
    for (i = 0; str[i] != '\0'; i++) {
        // If the character is not a space, keep it
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }

    // Add the null terminator at the end of the new string
    str[j] = '\0';

    printf("String after removing spaces: %s\n", str);

    return 0;
}