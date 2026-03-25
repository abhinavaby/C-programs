
#include <stdio.h>
#include <stdlib.h>

int main() {
    // --- USE CASE 1: Array of Pointers to Strings ---
    // Each element points to the first character of a string literal
    const char *fruits[] = {
        "Apple",
        "Banana",
        "Cherry",
        "Date"
    };
    int num_fruits = sizeof(fruits) / sizeof(fruits[0]);

    printf("--- Array of String Pointers ---\n");
    for (int i = 0; i < num_fruits; i++) {
        // Accessing strings directly via the pointer at fruits[i]
        printf("Index %d: %s\n", i, fruits[i]);
    }


    // --- USE CASE 2: Array of Pointers to Integers ---
    // Pointing to separate variables or dynamically allocated blocks
    int a = 10, b = 20, c = 30;
    int *int_ptrs[3] = {&a, &b, &c};

    printf("\n--- Array of Integer Pointers ---\n");
    for (int i = 0; i < 3; i++) {
        // Dereferencing (*int_ptrs[i]) to get the actual value
        printf("Pointer index %d points to value: %d\n", i, *int_ptrs[i]);
    }


    // --- USE CASE 3: Dynamic Array of Pointers (Heap Allocation) ---
    // Useful for 'jagged' arrays where rows can have different lengths
    int rows = 2;
    int **dynamic_ptrs = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++) {
        dynamic_ptrs[i] = (int *)malloc(sizeof(int));
        *dynamic_ptrs[i] = (i + 1) * 100;
    }

    printf("\n--- Dynamic Array of Pointers ---\n");
    for (int i = 0; i < rows; i++) {
        printf("Dynamic value %d: %d\n", i, *dynamic_ptrs[i]);
    }

    // Freeing dynamic memory
    for (int i = 0; i < rows; i++) {
        free(dynamic_ptrs[i]);
    }
    free(dynamic_ptrs);

    return 0;
}
