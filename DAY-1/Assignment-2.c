#include <stdio.h>

int main() {
    int num;

    // 1. Take input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // 2. Use a simple loop to print the table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}