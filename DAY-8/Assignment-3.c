#include <stdio.h>

int main() {
    // Outer loop runs 5 times for rows 'A' through 'E'
    for (char i = 'A'; i <= 'E'; i++) {
        
        // Inner loop prints characters starting from 'A' up to the current row character
        for (char j = 'A'; j <= i; j++) {
            printf("%c", j);
        }
        
        // Move to the next line after finishing the row
        printf("\n");
    }

    return 0;
}