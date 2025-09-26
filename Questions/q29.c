// Write a program to reverse a number using 
// while loop.
#include <stdio.h>
int main() {
    int num, reversed = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while(num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    
    printf("Reversed number is: %d\n", reversed);
    return 0;
}