#include <stdio.h>

// 1. Extern Storage Class
// 'extern' is used to declare a global variable defined elsewhere.
// Here, we define it globally so it is visible to the whole program.
int global_var = 10; 

void storageClassDemo() {
    // 2. Auto Storage Class (Default for local variables)
    // Created on function call and destroyed when function exits.
    auto int auto_var = 1; 

    // 3. Register Storage Class
    // Suggests the compiler store the variable in a CPU register for fast access.
    // Note: You cannot take the address (&) of a register variable.
    register int reg_var = 5; 

    // 4. Static Storage Class
    // Retains its value even after the function exits. Initialized only once.
    static int static_var = 0; 

    auto_var++;
    static_var++;

    printf("Auto: %d | Register: %d | Static: %d | Extern (Global): %d\n", 
            auto_var, reg_var, static_var, global_var);
}

int main() {
    printf("First Call:\n");
    storageClassDemo();

    printf("\nSecond Call (Static variable persists):\n");
    storageClassDemo();

    return 0;
}
