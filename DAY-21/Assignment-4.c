#include <stdio.h>

int main() {
    char str[] = "hello world";
    
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is lowercase (between 'a' and 'z')
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 to convert to uppercase
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}