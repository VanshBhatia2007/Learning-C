//Write a C program to check whether a no is negative, positive or zero.
#include <stdio.h>
int main() {
    int no;
    printf("Enter an integer: ");
    scanf("%d", &no);

    if (no > 0) {
        printf("%d is a positive no.\n", no);
    } else if (no < 0) {
        printf("%d is a negative no.\n", no);
    } else {
        printf("The no is zero.\n");
    }

    return 0;
}