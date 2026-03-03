#include <stdio.h>

struct Student {
    char name[50]; // Changed from 'char' to a 'char array' to hold full names
    int roll;
    float marks;
};

int main() {
    int i, n;

    printf("How many students? ");
    scanf("%d", &n);

    // Create an array of structures based on user input size
    struct Student record[n]; 

    for(i = 0; i < n; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        
        printf("Enter Name: ");
        // The space before %s helps skip any leftover 'newline' characters in the buffer
        scanf(" %s", record[i].name); 
        
        printf("Enter Roll Number: ");
        scanf("%d", &record[i].roll);
        
        printf("Enter Marks: ");
        scanf("%f", &record[i].marks);
    }

    printf("\n--- Displaying Records ---\n");
    for(i = 0; i < n; i++) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n", 
                record[i].roll, record[i].name, record[i].marks);
    }

    return 0;
}
