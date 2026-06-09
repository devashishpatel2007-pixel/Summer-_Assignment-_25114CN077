#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;
    char ch = 'A'; // Start with the character 'A'

    // Outer loop controls how many rows to print (1 to 5)
    for (i = 1; i <= rows; i++) {
        
        // Inner loop prints the current character 'i' times
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        
        // Move to the next line
        printf("\n");
        
        // Move to the next letter ('A' becomes 'B', then 'C', etc.)
        ch++; 
    }

    return 0;
}