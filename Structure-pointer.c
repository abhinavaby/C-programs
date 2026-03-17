#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for a Student
struct Student {
    int id;
    char name[50];
    float gpa;
    struct Student* next; // Self-referential pointer for a Linked List
};

// Function to create a new student node using dynamic memory
struct Student* createStudent(int id, const char* name, float gpa) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    if (newStudent == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    // Accessing members via arrow operator
    newStudent->id = id;
    strcpy(newStudent->name, name);
    newStudent->gpa = gpa;
    newStudent->next = NULL;
    return newStudent;
}

// Function to add a student to the list using a double pointer (pass-by-reference)
void addStudent(struct Student** head, int id, const char* name, float gpa) {
    struct Student* newStudent = createStudent(id, name, gpa);
    if (*head == NULL) {
        *head = newStudent;
        return;
    }
    struct Student* temp = *head; // Temporary traversal pointer
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newStudent;
}

// Function to display students using a structure pointer to traverse
void displayStudents(struct Student* head) {
    struct Student* ptr = head;
    printf("\n--- Student Records ---\n");
    while (ptr != NULL) {
        printf("ID: %d | Name: %s | GPA: %.2f\n", ptr->id, ptr->name, ptr->gpa);
        ptr = ptr->next;
    }
}

// Function to update GPA through a pointer
void updateGPA(struct Student* head, int id, float newGPA) {
    struct Student* ptr = head;
    while (ptr != NULL) {
        if (ptr->id == id) {
            ptr->gpa = newGPA;
            printf("\nGPA updated for student ID %d.\n", id);
            return;
        }
        ptr = ptr->next;
    }
    printf("Student with ID %d not found.\n", id);
}

// Function to free heap memory
void freeList(struct Student* head) {
    struct Student* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Student* listHead = NULL; // Initialize list head pointer

    // Add students to our dynamic structure
    addStudent(&listHead, 101, "Alice", 3.8);
    addStudent(&listHead, 102, "Bob", 3.5);
    addStudent(&listHead, 103, "Charlie", 3.9);

    displayStudents(listHead);

    // Modify data using structure pointers
    updateGPA(listHead, 101, 4.0);

    displayStudents(listHead);

    // Clean up allocated memory
    freeList(listHead);
    printf("\nMemory cleared. Program exited.\n");

    return 0;
}
