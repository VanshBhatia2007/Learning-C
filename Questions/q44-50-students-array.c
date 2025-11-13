// Write a program to input marks of 50 students using an array and display the 
// average marks of the class.
#include <stdio.h>
#define NUM_STUDENTS 50
int main() {
    int marks[NUM_STUDENTS];
    int sum = 0,in_marks=0;
    float average;
    printf("Enter marks for student :" );
    scanf("%d", &in_marks);
    // Input marks for each student
    for(int i = 0; i < NUM_STUDENTS; i++) {
        marks[i] = in_marks;
        in_marks++;
        sum += marks[i];
    }

    // Calculate average
    average = (float)sum / NUM_STUDENTS;

    // Display average marks
    printf("The average marks of the class is: %.2f\n", average);

    return 0;
}