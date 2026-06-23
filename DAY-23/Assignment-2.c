#include <stdio.h>
#include <string.h>

void findFirstRepeating(char str[]) {
    // Array to keep track of characters we have already seen
    int visited[256] = {0}; 
    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        // If the character is already marked as visited, it's the first repeat
        if (visited[(unsigned char)str[i]] == 1) {
            printf("The first repeating character is: %c\n", str[i]);
            return;
        }
        
        // Otherwise, mark this character as visited
        visited[(unsigned char)str[i]] = 1;
    }

    printf("No repeating characters found.\n");
}

int main() {
    char str[] = "programming";
    findFirstRepeating(str);
    return 0;
}