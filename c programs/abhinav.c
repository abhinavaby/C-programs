#include <stdio.h>

#ifdef _WIN32
    #include <windows.h> // For Windows Sleep(ms)
    #define SLEEP_MS(ms) Sleep(ms)
#else
    #include <unistd.h>  // For Linux usleep(microseconds)
    #define SLEEP_MS(ms) usleep(ms * 1000)
#endif

int main() {
    // Array of strings representing each row of the pattern
    const char *pattern[] = {
        "  *    ****   *   *  *****  *   *    *    *   *",
        " * *   *   *  *   *    *    **  *   * *   *   *",
        "*   *  ****   *   *    *    * * *  *   *  *   *",
        "*****  *   *  *****    *    *  **  *****  *   *",
        "*   *  *   *  *   *    *    *   *  *   *  *   *",
        "*   *  *   *  *   *    *    *   *  *   *   * * ",
        "*   *  ****   *   *  *****  *   *  *   *    *  "
    };

    printf("Loading name...\n\n");

    // Loop through each row of the pattern
    for (int i = 0; i < 7; i++) {
        printf("%s\n", pattern[i]);
        
        // Flush output buffer to ensure the row prints immediately
        fflush(stdout); 
        
        // Delay for 500 milliseconds (half a second) between rows
        SLEEP_MS(500); 
    }

    printf("\nDone!\n");
    return 0;
}

