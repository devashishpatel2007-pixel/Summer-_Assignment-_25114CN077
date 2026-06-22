#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0}; // Array to store frequency of all 256 ASCII characters
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    // Iterate through the string
    for (i = 0; str[i] != '\0'; i++) {
        // Use the character's ASCII value as an index
        freq[(unsigned char)str[i]]++;
    }

    printf("\nCharacter Frequencies:\n");
    for (i = 0; i < 256; i++) {
        // Only print characters that appeared at least once
        if (freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}