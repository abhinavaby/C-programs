#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *evenFile, *oddFile;
    int number;

    // Open the source file for reading
    // Assuming the source file is named 'numbers.txt'
    inputFile = fopen("numbers.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    // Open the destination files for writing
    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error: Could not open output files.\n");
        fclose(inputFile);
        return 1;
    }

    // Read integers until the end of the file
    while (fscanf(inputFile, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(evenFile, "%d\n", number);
        } else {
            fprintf(oddFile, "%d\n", number);
        }
    }

    printf("Processing complete. Check even.txt and odd.txt.\n");

    // Close all open files
    fclose(inputFile);
    fclose(evenFile);
    fclose(oddFile);

    return 0;
}
