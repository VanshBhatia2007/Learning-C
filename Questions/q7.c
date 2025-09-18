// Write a C program to find maximum between two numbers.
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is the maximum number.\n", a);
    } else if (b > a) {
        printf("%d is the maximum number.\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}