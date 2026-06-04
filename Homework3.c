// To check given number is natural or not//

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");

    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    if (num >= 1) {
        printf("%d is a natural number.\n", num);
    } else {
        printf("%d is not a natural number.\n", num);
    }

    return 0;
}
