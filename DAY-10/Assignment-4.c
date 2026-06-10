#include <stdio.h>

int main() {
    int rows = 5; // Total number of rows

    for (int i = 1; i <= rows; i++) {
        
        // 1. Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // 2. Print increasing characters (From 'A' up to the row letter)
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }

        // 3. Print decreasing characters (Back down to 'A')
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}