#include <stdio.h>

// Function that accepts a pointer to the first element
int sumArray(int *ptr, int size) {
    int total = 0;

    for (int i = 0; i < size; i++) {
        total += *ptr; // Add the value pointed to
        ptr++;         // Move pointer to the next memory address
    }

    return total;
}

int main() {
    int myNumbers[] = {5, 10, 15, 20};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

    // Pass the array name (which acts as a pointer)
    int result = sumArray(myNumbers, length);

    printf("The total sum is: %d\n", result);

    return 0;
}
