#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original_num = num; // Store for the final print

    while (num > 0) {
        // If the last bit is 1, add it to the count
        count += (num % 2); 
        
        // Divide by 2 to shift to the next bit
        num = num / 2;       
    }

    printf("The number of set bits in %d is: %d\n", original_num, count);

    return 0;
}