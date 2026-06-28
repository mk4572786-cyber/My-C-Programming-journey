// A program to check if a number is prime or not//

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0, 1, and negative numbers are not prime numbers
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Loop to check divisibility from 2 up to num / 2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a factor, so it is not prime
                break;       // Exit the loop early to save time
            }
        }
    }

    // Print the final result based on the tracking flag
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
