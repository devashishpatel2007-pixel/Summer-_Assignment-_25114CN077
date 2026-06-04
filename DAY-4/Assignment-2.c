#include <stdio.h>

int main() {
    int n;
    long long t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter the position (n) of the Fibonacci term: ");
    scanf("%d", &n);

    // Handle the base cases directly
    if (n == 1) {
        printf("The 1st Fibonacci term is: %lld\n", t1);
    } 
    else if (n == 2) {
        printf("The 2nd Fibonacci term is: %t2\n", t2);
    } 
    else {
        // Loop to find the nth term
        for (int i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("The %dth Fibonacci term is: %lld\n", n, t2);
    }

    return 0;
}