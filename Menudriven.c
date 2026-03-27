#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

// Structure to store student details
struct Student {
    int id;
    char name[50];
    float gpa;
};

// Global array and counter
struct Student records[MAX];
int count = 0;

// Function Prototypes
void addStudent();
void displayAll();
void searchStudent();
void updateGPA();
void deleteStudent();
void clearScreen();

int main() {
    int choice;

    while (1) {
        printf("\n====================================");
        printf("\n   STUDENT RECORD MANAGEMENT SYSTEM");
        printf("\n====================================");
        printf("\n1. Add New Student");
        printf("\n2. Display All Records");
        printf("\n3. Search by Student ID");
        printf("\n4. Update Student GPA");
        printf("\n5. Delete Student Record");
        printf("\n6. Exit");
        printf("\n------------------------------------");
        printf("\nEnter your choice (1-6): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n'); // Clear buffer
            continue;
        }

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: updateGPA(); break;
            case 5: deleteStudent(); break;
            case 6: 
                printf("\nExiting system. Goodbye!\n");
                exit(0);
            default: 
                printf("\nError: Invalid option chosen.\n");
        }
    }
    return 0;
}

// --- Function Definitions ---

void addStudent() {
    if (count < MAX) {
        printf("\nEnter ID: ");
        scanf("%d", &records[count].id);
        printf("Enter Name: ");
        getchar(); // Clear newline
        fgets(records[count].name, 50, stdin);
        records[count].name[strcspn(records[count].name, "\n")] = 0; // Remove trailing newline
        printf("Enter GPA: ");
        scanf("%f", &records[count].gpa);
        count++;
        printf("\nRecord added successfully!");
    } else {
        printf("\nDatabase Full!");
    }
}

void displayAll() {
    if (count == 0) {
        printf("\nNo records found.");
        return;
    }
    printf("\nID\tName\t\tGPA");
    printf("\n-------------------------------");
    for (int i = 0; i < count; i++) {
        printf("\n%d\t%-15s\t%.2f", records[i].id, records[i].name, records[i].gpa);
    }
    printf("\n");
}

void searchStudent() {
    int id, found = 0;
    printf("\nEnter Student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (records[i].id == id) {
            printf("\nStudent Found: %s (GPA: %.2f)", records[i].name, records[i].gpa);
            found = 1;
            break;
        }
    }
    if (!found) printf("\nStudent ID %d not found.", id);
}

void updateGPA() {
    int id, found = 0;
    printf("\nEnter ID to update GPA: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (records[i].id == id) {
            printf("Enter new GPA for %s: ", records[i].name);
            scanf("%f", &records[i].gpa);
            printf("\nGPA updated!");
            found = 1;
            break;
        }
    }
    if (!found) printf("\nRecord not found.");
}

void deleteStudent() {
    int id, found = 0;
    printf("\nEnter ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (records[i].id == id) {
            for (int j = i; j < count - 1; j++) {
                records[j] = records[j + 1];
            }
            count--;
            printf("\nRecord deleted successfully.");
            found = 1;
            break;
        }
    }
    if (!found) printf("\nID not found.");
}
