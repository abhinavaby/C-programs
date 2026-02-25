#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    printf("Enter a string: ");
    fgets(word, sizeof(word), stdin);
    
    // Remove newline character
    word[strcspn(word, "\n")] = '\0'; 

    for (int i = 0; word[i] != '\0'; i++) {
        // If current character is ' ' (marked as counted), skip it
        if (word[i] == ' ') {
            continue;
        }

        int count = 1; // Start at 1 for the current character
        for (int j = i + 1; word[j] != '\0'; j++) {
            if (word[i] == word[j]) {
                count++;
                word[j] = ' '; // Mark as counted so it's skipped later
            }
        }

        printf("'%c' occurs %d times\n", word[i], count);
    }
    return 0;
}
