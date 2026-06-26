#include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("--- Welcome to the Simple C Quiz ---\n\n");

    // Question 1
    printf("1. What is the size of an 'int' variable in C (usually)?\n");
    printf("1) 1 byte  2) 2 bytes  3) 4 bytes  4) 8 bytes\n");
    printf("Enter your choice: ");
    scanf("%d", &answer);
    
    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong. The correct answer was 3.\n\n");
    }

    // Question 2
    printf("2. Which operator is used for equality comparison?\n");
    printf("1) =  2) ==  3) !=  4) >=\n");
    printf("Enter your choice: ");
    scanf("%d", &answer);
    
    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong. The correct answer was 2.\n\n");
    }

    // Display Final Score
    printf("--- Quiz Finished ---\n");
    printf("You scored: %d out of 2\n", score);

    return 0;
}