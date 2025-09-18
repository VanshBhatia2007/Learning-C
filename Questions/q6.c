// Write a program to show the concept of arithmetic operators
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %.2f\n", a, b, (float)a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    return 0;
}