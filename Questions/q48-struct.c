// Write a program to create a structure for employees containing the following 
// data members: Employee ID, Employee Name, Age, Address, Department and 
// Salary. Input data for 10 employees and display the details of the employee from 
// the employee ID given by the user.
#include <stdio.h>
#include <string.h>
#define NUM_EMPLOYEES 10
struct Employee {
    int id;
    char name[50];
    int age;
    char address[100];
    char department[50];
    float salary;
};
int main() {
    struct Employee employees[NUM_EMPLOYEES];
    int searchId;
    int found = 0;

    // Input data for employees
    for(int i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Employee Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Address: ");
        scanf(" %[^\n]", employees[i].address);
        printf("Department: ");
        scanf(" %[^\n]", employees[i].department);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Input employee ID to search
    printf("Enter Employee ID to search: ");
    scanf("%d", &searchId);

    // Search for the employee by ID
    for(int i = 0; i < NUM_EMPLOYEES; i++) {
        if(employees[i].id == searchId) {
            found = 1;
            printf("Employee Details:\n");
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Age: %d\n", employees[i].age);
            printf("Address: %s\n", employees[i].address);
            printf("Department: %s\n", employees[i].department);
            printf("Salary: %.2f\n", employees[i].salary);
            break;
        }
    }

    if(!found) {
        printf("Employee with ID %d not found.\n", searchId);
    }

    return 0;
}