#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int left, right;
    int isPalindrome = 1; // Assume it is a palindrome initially

    printf("Enter a string: ");
    scanf("%s", str);

    // Initialize pointers
    left = 0;
    right = strlen(str) - 1;

    // Compare characters from both ends
    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}