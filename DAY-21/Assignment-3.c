#include <stdio.h>
#include <ctype.h> // Required for tolower() and isalpha()

int main() {
    char str[] = "Hello World";
    int vowels = 0, consonants = 0;
    char ch;

    for (int i = 0; str[i] != '\0'; i++) {
        // Convert character to lowercase for easier comparison
        ch = tolower(str[i]);

        // Check if the character is an alphabet letter
        if (isalpha(ch)) {
            // Check if it is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                // If it's a letter and not a vowel, it must be a consonant
                consonants++;
            }
        }
    }

    printf("String: %s\n", str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}