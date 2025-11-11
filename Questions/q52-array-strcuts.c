// Write a program to make use of arrays with structures in the following ways: (i) Use array as a structure data member 
// (ii) Create array of structure variables
#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 5
#define MAX_NAME_LENGTH 50
struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
    float marks[3]; // Array as a structure data member
};

int main() {
    struct Student students[MAX_STUDENTS]; // Array of structure variables
    for(int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(students[i].name, MAX_NAME_LENGTH, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline character
        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &students[i].age);
        printf("Enter marks for 3 subjects for student %d:\n", i + 1);
        for(int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
        getchar(); // Consume newline character left by scanf
    }

    printf("\nStudent Details:\n");
    for(int i = 0; i < MAX_STUDENTS; i++) {
        printf("Name: %s, Age: %d, Marks: %.2f, %.2f, %.2f\n", students[i].name, students[i].age, students[i].marks[0], students[i].marks[1], students[i].marks[2]);
    }

    return 0;
}