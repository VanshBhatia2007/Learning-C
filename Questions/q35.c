// Write a program to check whether a given number 
// is Armstrong or not using do-while
#include <stdio.h>
#include <math.h>
int main() {
    int num, original, sum = 0, digits = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    original = num; // Store the original number
    
    // Count the number of digits
    do {
        digits++;
        num /= 10;
    } while(num != 0);
    
    num = original; // Restore the original number
    
    // Calculate the sum of the cubes of each digit
    do {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    } while(num != 0);
    
    if(original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }
    
    return 0;
}