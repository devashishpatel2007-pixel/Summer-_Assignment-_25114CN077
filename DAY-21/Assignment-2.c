#include <stdio.h>

int main() {
    char str[] = "Hello";
    int length = 0;
    int i, temp;

    // 1. First, find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // 2. Reverse the string by swapping characters
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}