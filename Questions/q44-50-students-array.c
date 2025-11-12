// Write a program to input marks of 50 students using an array and display the 
// average marks of the class.
#include <stdio.h>
#define NUM_STUDENTS 50
int main() {
    int marks[NUM_STUDENTS];
    int sum = 0;
    float average;

    // Input marks for each student
    for(int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    // Calculate average
    average = (float)sum / NUM_STUDENTS;

    // Display average marks
    printf("The average marks of the class is: %.2f\n", average);

    return 0;
}