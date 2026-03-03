#include <stdio.h>

// Recursive function to find sum of digits
int sumOfDigits(int n) {
    // Base case: if number is 0, sum is 0
    if (n == 0) {
        return 0;
    }
    
    // Recursive step: Last digit + sum of remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle negative numbers by converting to positive
    int positiveNum = (number < 0) ? -number : number;

    int result = sumOfDigits(positiveNum);

    printf("The sum of digits of %d is: %d\n", number, result);

    return 0;
}
