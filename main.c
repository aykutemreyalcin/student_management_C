#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int id;
    char name[50];
    float grade;
} Student;

Student students[MAX_STUDENTS];
int student_count = 0;

void add_student() {
    if (student_count >= MAX_STUDENTS) {
        printf("Student list is full!\n");
        return;
    }
    printf("Enter Student ID: ");
    scanf("%d", &students[student_count].id);
    printf("Enter Student Name: ");
    scanf(" %49[^"]", students[student_count].name);
    printf("Enter Student Grade: ");
    scanf("%f", &students[student_count].grade);
    student_count++;
    printf("Student added successfully!\n");
}

void list_students() {
    if (student_count == 0) {
        printf("No students found.\n");
        return;
    }
    printf("\nStudent List:\n");
    printf("ID\tName\t\tGrade\n");
    for (int i = 0; i < student_count; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].id, students[i].name, students[i].grade);
    }
}

void search_student() {
    int id;
    printf("Enter Student ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < student_count; i++) {
        if (students[i].id == id) {
            printf("Student Found: %s, Grade: %.2f\n", students[i].name, students[i].grade);
            return;
        }
    }
    printf("Student not found!\n");
}

void delete_student() {
    int id;
    printf("Enter Student ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < student_count; i++) {
        if (students[i].id == id) {
            for (int j = i; j < student_count - 1; j++) {
                students[j] = students[j + 1];
            }
            student_count--;
            printf("Student deleted successfully!\n");
            return;
        }
    }
    printf("Student not found!\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. List Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                list_students();
                break;
            case 3:
                search_student();
                break;
            case 4:
                delete_student();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
