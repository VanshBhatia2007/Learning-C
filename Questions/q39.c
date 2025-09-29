// Write a program to add two numbers using function declaration, calling and 
// definition.
#include <stdio.h>

int add(int a, int b);  // Function declaration

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = add(num1, num2);  // Function calling
    printf("Sum: %d\n", sum);
    return 0;
}

int add(int a, int b) {  // Function definition
    return a + b;
}