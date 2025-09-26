// Write a program to find the largest digit in a 
// number using while.
#include <stdio.h>
int main() {
    int num, largest = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    while(num != 0) {
        int digit = num % 10;
        if(digit > largest) {
            largest = digit;
        }
        num /= 10;
    }
    
    printf("Largest digit is: %d\n", largest);
    return 0;
}