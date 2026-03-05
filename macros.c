#include <stdio.h>

// 1. Object-like Macro: Used for constants or simple values
#define PI 3.14159

// 2. Function-like Macro: Behaves like a function but expanded inline
#define SQUARE(x) ((x) * (x))

// 3. Chain Macro: Using one macro inside another
#define CIRCLE_AREA(r) (PI * SQUARE(r))

// 4. Multi-line Macro: Uses backslash (\) for continuation
#define PRINT_VALUES(a, b) do { \
    printf("Value 1: %d\n", a); \
    printf("Value 2: %d\n", b); \
} while(0)

// 5. Stringizing Operator (#): Converts a macro parameter into a string literal
#define TO_STR(x) #x

// 6. Token Pasting (Concatenation) (##): Merges two tokens into one
#define CONCAT(a, b) a##b

// 7. Variadic Macro: Accepts a variable number of arguments (C99+)
#define LOG(fmt, ...) printf("[LOG] " fmt "\n", __VA_ARGS__)

// 8. Conditional Compilation: Including/excluding code based on conditions
#define DEBUG_MODE 1

int main() {
    // Using Object-like and Chain macros
    printf("PI: %.5f\n", PI);
    printf("Area of circle (r=2): %.2f\n", CIRCLE_AREA(2));

    // Using Function-like macro
    printf("Square of 5: %d\n", SQUARE(5));

    // Using Multi-line macro
    PRINT_VALUES(10, 20);

    // Using Stringizing and Token Pasting
    printf("Stringized: %s\n", TO_STR(C-Programming));
    int myVar = 100;
    printf("Concatenated variable: %d\n", CONCAT(my, Var));

    // Using Variadic macro
    LOG("System initialized with status %d", 1);

    // Using Predefined Macros
    printf("Compiled on: %s %s\n", __DATE__, __TIME__);
    printf("File: %s, Line: %d\n", __FILE__, __LINE__);

    // Using Conditional Compilation
#if DEBUG_MODE
    printf("Debug mode is active!\n");
#endif

    return 0;
}
