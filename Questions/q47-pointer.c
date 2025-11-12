// Write a program to add, subtract, multiply and divide two numbers using  pointers.
#include <stdio.h>
void add(float *a, float *b, float *result) {
    *result = *a + *b;
}
void subtract(float *a, float *b, float *result) {
    *result = *a - *b;
}
void multiply(float *a, float *b, float *result) {
    *result = (*a) * (*b);
}
void divide(float *a, float *b, float *result) {
    if(*b != 0) {
        *result = (*a) / (*b);
    } else {
        printf("Error: Division by zero.\n");
        *result = 0;
    }
}
int main() {
    float num1, num2, result;
    char operator;

    // Input two numbers and an operator
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    
    switch(operator) {
        case '+':
            add(&num1, &num2, &result);
            printf("Result: %.2f\n", result);
            break;
        case '-':
            subtract(&num1, &num2, &result);
            printf("Result: %.2f\n", result);
            break;
        case '*':
            multiply(&num1, &num2, &result);
            printf("Result: %.2f\n", result);
            break;
        case '/':
            divide(&num1, &num2, &result);
            if(num2 != 0) {
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    return 0;
}